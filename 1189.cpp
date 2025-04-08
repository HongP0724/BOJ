#include <bits/stdc++.h>
using namespace std;

int r, c, k;
int ans;
char board[6][6];
int visited[6][6];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int cur_r, int cur_c, int dist)
{
    visited[cur_r][cur_c] = dist;

    if (dist == k)
    {
        if (cur_r == 0 && cur_c == c - 1)
        {
            ans++;
        }
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        int nx = cur_r + dx[i];
        int ny = cur_c + dy[i];
        if (nx < 0 || nx >= r || ny < 0 || ny >= c)
            continue;
        if (board[nx][ny] == 'T' || visited[nx][ny])
            continue;

        dfs(nx, ny, dist + 1);
        visited[nx][ny] = 0;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> r >> c >> k;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> board[i][j];
    dfs(r - 1, 0, 1);
    cout << ans;
}