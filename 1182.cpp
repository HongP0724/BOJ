#include <bits/stdc++.h>
using namespace std;
int arr[20];
int is_used[20];

int ans;

void solution(int n,int s, int cur, int k)
{
    if(k!=-1 && s==cur)
    {
        ans++;
    }

    for(int i=k+1;i<n;i++)
    {
        solution(n,s,cur+arr[i],i);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,s;
    cin >> n >> s;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    solution(n,s,0,-1);
    cout << ans;
}