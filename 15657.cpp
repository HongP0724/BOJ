#include <bits/stdc++.h>
using namespace std;

int arr[10];
int i_arr[10];
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

    int st = 0;
    if (k != 0)
        st = i_arr[k - 1];

    for (int i = st; i < n; i++)
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
        cin >> arr[i];

    sort(arr, arr + n);
    solve(0);
}