#include <bits/stdc++.h>

using namespace std;
int a[1005][1005];
vector<int> List[100001];
int main()
{
	int n;
	cin >> n;
	// Nhap mang 1 chieu ma tran ke
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	// Doc mang neu co a[i][j] = 1 thi push vao cuoi vector
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j])
				List[i + 1].push_back(j + 1);
		}
	}

	// Doc mang vector ket qua
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < List[i].size(); j++)
		{
			cout << List[i][j] << ' ';
		}
		cout << "\n";
	}
}