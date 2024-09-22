#include <bits/stdc++.h>
using namespace std;

int n;
int board[21][21];
int temp[21][21];
int temp2[21][21];
int arr[5];
int ans = 0;

// dir(0:왼쪽, 1:위쪽, 2:오른쪽, 3:아래쪽)
// dir -> 반시계방향으로 회전하는 횟수
void move(int dir)
{
    int t = dir;
    while (t--)
    {
        // temp에 board 복사
        // 이때 temp는 board를 회전시키기 위해 사용
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp[i][j] = board[i][j];
            }
        }

        // 반시계 방향으로 board를 회전
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                board[n - 1 - j][i] = temp[i][j];
            }
        }
    }

    memset(temp, 0, sizeof(temp));

    for (int i = 0; i < n; i++)
    {
        int idx = 0;
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 0)
                continue;
            if (temp[i][idx] == 0)
            {
                temp[i][idx] = board[i][j];
            }
            else if (temp[i][idx] == board[i][j])
            {
                temp[i][idx] *= 2;
                idx++;
            }
            else
            {
                idx++;
                temp[i][idx] = board[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            board[i][j] = temp[i][j];
}

void solve(int k)
{
    if (k == 5)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp2[i][j] = board[i][j];
            }
        }
        for (int i = 0; i < 5; i++)
        {
            move(arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans = max(ans, board[i][j]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                board[i][j] = temp2[i][j];
            }
        }

        return;
    }

    for (int i = 0; i < 4; i++)
    {
        arr[k] = i;
        solve(k + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> board[i][j];
        }
    }
    solve(0);
    cout << ans;
}