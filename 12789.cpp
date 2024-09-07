#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    stack<int> s;
    queue<int> q;
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        q.push(n);   
    }

    for(int i=1;i<=n;)
    {
        if(!q.empty())
        {
            if(q.front() == i)
            {
                q.pop();
                i++;
                continue;
            }
        }

        if(!s.empty())
        {
            if(s.top() == i)
            {
                s.pop();
                i++;
                continue;
            }
        }

        int st = s.empty() ? 1001 : s.top();

        if(q.front() > st)
        {
            cout << "Sad";
            return 0;
        }

        else
        {
            s.push(q.front());
            q.pop();
        }
    }
    cout << "Nice";
}