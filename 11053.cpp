#include <bits/stdc++.h>
using namespace std;
int d[1005];
int num[1005];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> num[i];
    }

    for(int i=1;i<=n;i++)
    {
        int temp = 0;
        for(int j=0;j<i;j++)
        {
            if(num[j] < num[i])
            {
                temp = max(temp,d[j]);
            }
        }
        d[i] = temp + 1;
    }
    cout << *max_element(d,d+n+1);
}