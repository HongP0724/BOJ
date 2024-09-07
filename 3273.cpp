#include <bits/stdc++.h>
using namespace std;

int arr[1000001];

int main(void)
{
    int N, num, x;
    int ans = 0;
    cin >> N;
    while(N--)
    {
        cin >> num;
        arr[num]++;
    }
    cin >> x;
    for(int i=1;i<(x+1)/2;i++)
    {
        if(arr[i] && x-i >= 1 && x-i<=1000000 && arr[x-i])
            ans++;
    }
    cout << ans;
}