#include <bits/stdc++.h>
using namespace std;

long long int d0[100];
long long int d1[100];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    d0[1] = 0;
    d1[1] = 1;
    for(int i=2;i<=n;i++)
    {
        d0[i] = d0[i-1] + d1[i-1];
        d1[i] = d0[i-1];
    }
    cout << d0[n] + d1[n];
}