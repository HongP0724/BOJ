#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    queue<int> q;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }
    for(int i=1;i<n;i++)
    {
        int l = ((long)i * i * i - 1)% q.size();
        for(int i = 0; i<l;i++)
        {
            int some = q.front();
            q.pop();
            q.push(some);
        }
        q.pop();
    }
    cout << q.front();
}