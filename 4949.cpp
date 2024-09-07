#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    while(1)
    {
        bool flag = 1;
        string str;
        getline(cin,str);
        if(str[0] == '.')
            break;
        stack<char> s;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='[' || str[i]=='(')
            {
                s.push(str[i]);
            }
            else if(str[i] ==']')
            {
                if(!s.empty() && s.top()=='[')
                    s.pop();
                else
                {
                    cout<< "no" << '\n';
                    flag = 0;
                    break;
                }
            }
            else if(str[i] == ')')
            {
                if(!s.empty() && s.top()=='(')
                    s.pop();
                else
                {
                    cout<<"no"<<'\n';
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 1 && !s.empty())
        {
            cout << "no" << '\n';
            flag = 0;
        }
        if(flag==1)
            cout << "yes" << '\n';
    }
}