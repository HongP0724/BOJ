#include <bits/stdc++.h>
using namespace std;

int d[10][1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=0;i<10;i++)
    {
        d[i][1] = 1;
    }

    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<10;j++)
        {
            for(int k=0;k<=j;k++)
            {
                d[j][i] += d[k][i-1];
            }
            d[j][i] %= 10007;
        }
    }

    long long int temp = 0;
    for(int i=0;i<10;i++)
    {
        temp += d[i][n];
    }

    cout << temp % 10007;
}