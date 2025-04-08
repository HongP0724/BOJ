#include <bits/stdc++.h>
using namespace std;

int z[45];
int o[45];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    
    z[0] = 1;
    o[1] = 1;

    for(int i=2;i<=40;i++)
    {
        z[i] = z[i-2] + z[i-1];
        o[i] = o[i-2] + o[i-1];
    }

    while(t--)
    {
        int n;
        cin >> n;

        cout << z[n] << " " << o[n] << "\n";
    }

}