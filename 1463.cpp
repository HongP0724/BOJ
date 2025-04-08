#include <bits/stdc++.h>
using namespace std;

int d[1000001];

int main(void)
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int d1 = INT_MAX;
        int d2 = INT_MAX;
        int d3 = INT_MAX;
        if(i%2==0) d1 = d[i/2] + 1;
        if(i%3==0) d2 = d[i/3] + 1;
        d3 = d[i-1] + 1;
        d[i] = min(d1,d2);
        d[i] = min(d[i],d3);
    }
    cout << d[n];

}