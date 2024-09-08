#include <bits/stdc++.h>
using namespace std;
int arr[800001];
long long int ans;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<pair<int,long long int>> s;
    s.push(make_pair(1000000001,0));
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        long long int temp = 0;
        while(arr[i] > s.top().first)
        {
            temp += s.top().second + 1;
            s.pop();
        }
        s.push(make_pair(arr[i],temp));
        ans += temp;
    }
    cout << ans;


}