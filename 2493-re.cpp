#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    stack<pair<int, int>> s;
    int n;
    int max = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        if (num > max)
        {
            max = num;
            cout << "0 ";
            s.push(make_pair(i + 1, num));
        }

        else
        {
            while (num > s.top().second)
            {
                s.pop();
            }
            cout << s.top().first << " ";
            s.push(make_pair(i+1,num));
        }
    }
}