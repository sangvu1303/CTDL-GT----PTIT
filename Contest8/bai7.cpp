#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int t;

void xuli()
{
    int n;
    cin >> n;
    int count = 0;
    ll a;
    queue<ll> q;
    q.push(1);
    while (!q.empty())
    {
        a = q.front();
        q.pop();
        if (a <= n)
        {
            count++;
            q.push(a * 10);
            q.push(a * 10 + 1);
        }
    }
    cout << count << "\n";
}

int main()
{
    cin >> t;
    while (t--)
    {
        xuli();
    }
    return 0;
}