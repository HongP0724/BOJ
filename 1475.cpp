#include <bits/stdc++.h>
using namespace std;

int arr[10];
int main(void)
{
    string s;
    cin >> s;
    for(char n : s)
    {
        if(n-'0'==9) arr[6]++;
        else arr[n-'0']++;
    }
    arr[6] = (arr[6] + 1) /2;
    
    cout << *max_element(arr,arr+10);

}