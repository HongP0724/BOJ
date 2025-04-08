#include <bits/stdc++.h>
using namespace std;
long long int d[1000001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    d[0] = 1;
    d[1] = 1;
    d[2] = 2;
    for(int i = 3;i<=1000000;i++)
    {
        d[i] = d[i-1] + d[i-2] + d[i-3];
        d[i] %= 1000000009;
    }
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << d[n] << "\n";
    }
    
}