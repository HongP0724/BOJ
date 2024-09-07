#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int ans = 0;
        int b = 1;
        stack<char> s;
        string c;
        getline(cin,c);
        for(int i=0;i<c.length();i++)
        {
            if(c[i] == '[')
            {
                s.push('[');
                if(s.size() > ans)
                    ans = s.size();
            }
            else
            {
                s.pop();
            }
        }
        for(int i=0;i<ans;i++)
        {
            b *= 2;
        }

        cout << b << endl;
    }
}