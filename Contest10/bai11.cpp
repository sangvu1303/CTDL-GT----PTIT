#include <bits/stdc++.h>

using namespace std;

#define TRUE 1
#define FALSE 0
#define MAX 10000

int a[10000][10000];             //ma trận trọng số của đồ thị.
int n, m, sc, w, chuaxet[10000]; //số đỉnh của đồ thị
int cck[10000][3];               //danh sách cạnh của cây khung nhỏ nhất.
void nhap(void)
{
    int i, j, k;
    cin >> n >> m;
    //khỏi tạo ma trận trọng số của đồ thị a[i][j] = MAX.
    for (i = 1; i <= n; i++)
    {
        chuaxet[i] = TRUE; //Gán nhãn cho các đỉnh.
        for (j = 1; j <= n; j++)
            a[i][j] = MAX;
    }

    //nhập danh sách cạnh.
    for (int p = 1; p <= m; p++)
    {
        cin >> i >> j >> k;
        a[i][j] = k;
        a[j][i] = k;
    }
}
void PRIM(void)
{
    int k, top, min, l, t, u;
    int s[100]; //mảng chứa các đỉnh của cây khung nhỏ nhất.
    sc = 0;
    w = 0;
    u = 1;
    top = 1;
    s[top] = u; // thêm đỉnh u bất kỳ vào mảng s[]
    chuaxet[u] = FALSE;
    while (sc < n - 1)
    {
        min = MAX;
        //tìm cạnh có độ dài nhỏ nhất với các đỉnh trong mảng s[].
        for (int i = 1; i <= top; i++)
        {
            t = s[i];
            for (int j = 1; j <= n; j++)
            {
                if (chuaxet[j] && min > a[t][j])
                {
                    min = a[t][j];
                    k = t;
                    l = j;
                }
            }
        }
        sc++;
        w = w + min;
        //thêm vào danh sách cạnh của cây khung.
        cck[sc][1] = k;
        cck[sc][2] = l;
        chuaxet[l] = FALSE;
        top++;
        s[top] = l;
    }
}
void Result(void)
{
    cout << w << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        PRIM();
        Result();
    }

    return 0;
}