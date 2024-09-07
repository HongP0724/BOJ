#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        list<char> l;
        auto cur = l.begin();
        string s;
        cin >> s;
        for(char c:s)
        {
            if(c == '<')
            {
                if(cur != l.begin())
                    --cur;
            }

            else if(c=='>')
            {
                if(cur != l.end())
                    ++cur;
            }

            else if(c=='-')
            {
                if(cur != l.begin())
                {
                    --cur;
                    cur = l.erase(cur);
                }
            }

            else
            {
                l.insert(cur,c);
            }
        }
        for(auto it = l.begin();it!=l.end();++it)
        {
            cout << *it;
        }
        cout << '\n';
    }
}