#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    stack<int> S;
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        S.push(num);
    }

    int temp = 0;
    int cnt = 0;

    while (!S.empty())
    {
        int cur = S.top();
        S.pop();
        if (cur > temp)
        {
            ++cnt;
            temp = cur;
        }
    }
    cout << cnt;
}