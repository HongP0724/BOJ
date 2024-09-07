#include <bits/stdc++.h>
using namespace std;

int board[2188][2188];
int ans[3];

void find_area(int n, int r, int c)
{
    if (n == 1)
    {
        ans[board[r][c] + 1]++;
        return;
    }

    int start = board[r][c];
    int flag = true;
    for (int i = r; i < r + n; i++)
    {
        for (int j = c; j < c + n; j++)
            if (board[i][j] != start)
            {
                flag = false;
                break;
            }
        if (!flag)
            break;
    }

    if (flag)
    {
        ans[start + 1]++;
        return;
    }

    for (int i = r; i < r + n; i += n / 3)
    {
        for (int j = c; j < c + n; j += n / 3)
        {
            find_area(n / 3, i, j);
        }
    }
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> board[i][j];
        }
    }
    find_area(n, 1, 1);
    for (int i = 0; i < 3; i++)
    {
        cout << ans[i] << "\n";
    }
}