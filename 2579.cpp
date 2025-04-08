#include <bits/stdc++.h>
using namespace std;

int stair[305];
int d[3][101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> stair[i];
    }

    d[1][1] = stair[1];
    d[1][2] = stair[2];
    d[2][2] = stair[1] + stair[2];
    for(int i=3;i<=n;i++)
    {
        d[1][i] = max(d[1][i-2],d[2][i-2]) + stair[i];
        d[2][i] = d[1][i-1] + stair[i];
    }

    cout << max(d[1][n],d[2][n]);
}