#include <bits/stdc++.h>
using namespace std;

long long int d[101];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    d[1] = d[2] = d[3] = 1;
    d[4] = d[5] = 2;
    int t;
    cin >> t;
    for(int i=5;i<=100;i++)
    {
        d[i] = d[i-1] + d[i-5];
    }
    while(t--)
    {
        int n;
        cin >> n;
        cout << d[n] << "\n";
    }
}