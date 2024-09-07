#include <bits/stdc++.h>
using namespace std;

int board[130][130];

int ans[2];

void find_area(int n, int r, int c)
{
    int flag = true;
    for (int i = r; i < r + n; i++)
    {
        for (int j = c; j < c + n; j++)
        {
            if (board[i][j] != board[r][c])
            {
                flag = false;
                break;
            }
        }
        if (!flag)
            break;
    }

    if (flag)
    {
        ans[board[r][c]]++;
        return;
    }

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            find_area(n / 2, r + n / 2 * i, c + n / 2 * j);
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }

    find_area(n, 0, 0);
    cout << ans[0] << "\n"
         << ans[1];
}