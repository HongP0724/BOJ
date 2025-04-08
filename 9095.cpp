#include <bits/stdc++.h>
using namespace std;

int d[15];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    d[0] = 1;
    for (int i = 1; i <= 11; i++)
    {
        d[i] = d[i - 1];
        if (i >= 2)
            d[i] += d[i - 2];
        if (i >= 3)
            d[i] += d[i - 3];
    }
    
    while(t--)
    {
        int n;
        cin >> n;
        cout << d[n] << "\n";
    }
}