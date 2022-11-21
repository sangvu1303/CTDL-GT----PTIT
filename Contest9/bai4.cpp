#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int n, u, v;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = 0;
        }
    }
    cin.ignore();
    for (int i = 1; i <= n; i++)
    {
        string str;
        getline(cin, str);
        str += ' ';
        int val = 0;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == ' ')
            {
                a[i][val] = 1;
                val = 0;
            }
            else
                val = val * 10 + (str[j] - '0');
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}
