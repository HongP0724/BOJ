#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        bool flag = 1;
        string c;
        cin >> c;
        stack<char> s;
        for(int i=0;i<c.size();i++)
        {
            if(c[i] == '(')
            {
                s.push('(');
            }
            else
            {
                if(!s.empty())
                    s.pop();
                else
                {
                    flag = 0;
                    break;
                }

            }
        }
        if(!s.empty())
            flag = 0;
        
        flag ? (cout << "YES" << endl) : (cout << "NO" << endl);

    }
}