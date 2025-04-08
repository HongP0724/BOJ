#include <bits/stdc++.h>
using namespace std;

int d[100005];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> d[i];
        d[i] += d[i-1];
    }
    for(int i=0;i<m;i++)
    {
        int st, en;
        cin >> st >> en;
        cout << d[en] - d[st-1] << "\n";
    }

}