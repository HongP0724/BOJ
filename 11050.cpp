#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b;
    int up = 1, down = 1;
    cin >> a >> b;
    b = min(b,a-b);
    for(int i=0;i<b;i++)
    {
        up *= a - i;
        down *= i + 1;
    }
    cout << up / down << endl;

}