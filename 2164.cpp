#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<int> q;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    int ans;
    while (q.size()>1)
    {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
}