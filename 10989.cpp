#include <bits/stdc++.h>
using namespace std;

int arr[10001];

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        arr[n]++;
    }
    for(int i=1;i<=10000;i++)
    {
        for(int j=0;j<arr[i];j++)
        {
            cout<< i << '\n';
        }
    }
}