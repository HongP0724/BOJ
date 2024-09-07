#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> v;
    stack<int> s;
    vector<char> ans;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        v.push_back(num);
    }
    auto it = v.begin();
    for (int i = 1; i <= n; i++)
    {
        while (!s.empty() && s.top() == *it)
        {
            s.pop();
            ++it;
            ans.push_back('-');
        }
        s.push(i);
        ans.push_back('+');
    }
    while (!s.empty() && s.top() == *it)
    {
        s.pop();
        ++it;
        ans.push_back('-');
    }
    if(!s.empty())
    {
        cout <<"NO";
        return 0;
    }
    for(char c : ans)
    {
        cout << c << '\n';
    }
}