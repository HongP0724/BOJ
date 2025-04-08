#include <bits/stdc++.h>
using namespace std;

int d[505][505];
int b[505][505];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> b[i][j];
        }
    }

    d[1][1] = b[1][1];

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + b[i][j];
        }
    }

    cout << *max_element(d[n],d[n] + n + 1);
}