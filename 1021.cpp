#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    queue<int> q;
    int n, m, x, temp, ans = 0;
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }
    while(m--)
    {
        temp = 0;
        cin >> x;
        while(q.front() != x)
        {
            q.push(q.front());
            q.pop();
            temp++;
        }
        temp = temp > q.size() - temp ? q.size() - temp : temp;
        ans+=temp;
        q.pop();
    }
    cout << ans;

}