#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr[10];

void solution(int k, int prev)
{
    if(k==m)
    {
        for(int i=0;i<m;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=prev+1;i<n;i++)
    {
        arr[k] = i+1;
        solution(k+1,i);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    solution(0,-1);
}