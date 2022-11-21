#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> a;

void xuli()
{
    int n, m;
    cin >> n >> m;
    a = vector<vector<int>>(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i].empty())
            continue;
        for (int j = 0; j < a[i].size(); j++)
        {
            int x = a[i][j];
            if (a[i].size() != a[x].size())
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        xuli();
        cout << endl;
    }
    return 0;
}