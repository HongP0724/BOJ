#include <bits/stdc++.h>
using namespace std;

int wine[10005];
int d[3][10001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> wine[i];
    }

    d[1][1] = wine[1];
    for (int i = 2; i <= n; i++)
    {
        d[0][i] = max({d[0][i - 1], d[1][i - 1], d[2][i - 1]});
        d[1][i] = d[0][i - 1] + wine[i];
        d[2][i] = d[1][i - 1] + wine[i];
    }

    cout << max({d[1][n], d[2][n], d[1][n - 1], d[2][n - 1]});
}