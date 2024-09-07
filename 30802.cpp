#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, t, p, arr[6];
    int total = 0;
    cin >> n;
    for(int i=0;i<6;i++)
    {
        cin >> arr[i];
    }
    cin >> t >> p;

    for (int i=0;i<6;i++)
    {
        arr[i] = arr[i] / t + (arr[i] % t ? 1 : 0); 
        total += arr[i];
    }

    cout << total << '\n' << n/p << ' ' << n%p;


    
}