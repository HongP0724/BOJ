#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int sum = 0;
    int n;
    int input;
    stack<int> s;
    cin >> n;
    while (n--)
    {
        cin >> input;
        if (input)
        {
            sum += input;
            s.push(input);
        }
        else
        {
            sum -= s.top();
            s.pop();
        }
    }
    cout << sum;
}