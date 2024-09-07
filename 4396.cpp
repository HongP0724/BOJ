#include <bits/stdc++.h>
using namespace std;
string board[11];
string clicked[11];
char ans_board[11][11];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> clicked[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (clicked[i][j] == '.')
                ans_board[i][j] = '.';
            else
            {
                if (board[i][j] == '*')
                {
                    flag = true;
                }
                else
                {
                    int ans = 0;
                    for (int k = 0; k < 8; k++)
                    {
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                            continue;
                        if (board[nx][ny] == '*')
                            ans++;
                    }
                    ans_board[i][j] = '0' + ans;
                }
            }
        }
    }

    if (flag)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == '*')
                    ans_board[i][j] = '*';
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ans_board[i][j];
        }
        cout << "\n";
    }
}