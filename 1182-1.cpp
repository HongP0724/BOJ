#include <bits/stdc++.h>
using namespace std;

int n, s;
int cnt;
int cur;
int arr[20];

void solution(int k)
{
    if (k == n)
    {
        if (cur == s)
            cnt++;
        cur-=arr[k-1];
        return;
    }
    solution(k + 1);
    cur+=arr[k];
    solution(k + 1);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solution(0);
    if (!s)
        cnt--;
    cout << cnt;
}

//https://blog.encrypted.gg/945