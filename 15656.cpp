#include <bits/stdc++.h>
using namespace std;

int arr[8];
int i_arr[8];
int n, m;

void solve(int k)
{
    if (k == m)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i_arr[i]] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < n; i++)
    {
        i_arr[k] = i;
        solve(k + 1);
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    solve(0);
}