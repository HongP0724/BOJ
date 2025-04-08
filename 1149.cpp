#include <bits/stdc++.h>
using namespace std;

int d[1005][3];
int p[1005][3];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> p[i][j];
        }
    }

    d[1][0] = p[1][0];
    d[1][1] = p[1][1];
    d[1][2] = p[1][2];

    for(int i=2;i<=n;i++)
    {
        d[i][0] = min(d[i-1][1],d[i-1][2]) + p[i][0];
        d[i][1] = min(d[i-1][0],d[i-1][2]) + p[i][1];
        d[i][2] = min(d[i-1][0],d[i-1][1]) + p[i][2];
    }

    int ans = min(d[n][0],d[n][1]);
    ans = min(ans,d[n][2]);

    cout << ans;
}