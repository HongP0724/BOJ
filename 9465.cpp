#include <bits/stdc++.h>
using namespace std;

int d[3][100001];
int v[2][100001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> v[i][j];
            }
        }

        for (int i = 1; i <= n; i++)
        {
            d[0][i] = max(d[1][i - 1], d[2][i - 1]) + v[0][i];
            d[1][i] = max(d[0][i - 1], d[2][i - 1]) + v[1][i];
            d[2][i] = max({d[0][i - 1], d[1][i - 1], d[2][i - 1]});
        }

        cout << max({d[0][n], d[1][n], d[2][n]}) << "\n";
    }
}