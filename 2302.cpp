#include <bits/stdc++.h>
using namespace std;
int d[41];
bool vip[41];

int main(void)
{
    int n, m;
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int temp;
        cin >> temp;
        vip[temp] = 1;
    }

    d[0] = d[1] = 1;
    for(int i=2;i<=n;i++)
    {
        if(vip[i] || vip[i-1])
        {
            d[i] = d[i-1];
        }
        else
            d[i] = d[i-1] + d[i-2];
    }

    // for(int i=1;i<=n;i++)
    // {
    //     cout << d[i] << " ";
    // }
    // cout << "\n";
    cout << d[n];
}