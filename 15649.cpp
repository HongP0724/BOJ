#include <bits/stdc++.h>
using namespace std;

int arr[10];
bool is_used[10];

void solution(int m, int n, int k)
{
    if(n==k)
    {
        for(int i=0;i<n;i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i=1;i<=m;i++)
    {
        if(!is_used[i])
        {
            arr[k] = i;
            is_used[i] = 1;
            solution(m,n,k+1);
            is_used[i] = 0;
        }
    }


}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m, n;
    cin >> m >> n;
    solution(m,n,0);
}