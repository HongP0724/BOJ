#include <bits/stdc++.h>
using namespace std;

int d[100005];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int ans = INT_MIN;
    int d = 0;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int temp;
        cin >> temp;
        d = max(d+temp,temp);
        ans = max(ans,d);
    }
    cout << ans;
}