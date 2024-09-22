#include <bits/stdc++.h>
using namespace std;

int n, m;
int num[10];
int arr[10];
int is_used[10];

void solve(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << num[arr[i]] << " ";
        }
        cout << "\n";
        return;
    }

    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (!is_used[i] && num[i] != temp)
        {
            arr[k] = i;
            is_used[i] = 1;
            temp = num[i];
            solve(k + 1);
            is_used[i] = 0;
        }
    }
}

int main(void)
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);

    solve(0);
}