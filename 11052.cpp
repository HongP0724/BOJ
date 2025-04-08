#include <bits/stdc++.h>
using namespace std;

int p[1001];
int d[1001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> p[i];
    }

    for(int i=1;i<=n;i++)
    {
        int temp = 0;
        for(int j=0;j<i;j++)
            temp = max(temp,d[j] + p[i-j]);
        d[i] = temp;
    }
    cout << d[n] << "\n";
}