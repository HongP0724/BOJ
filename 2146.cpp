#include <bits/stdc++.h>
using namespace std;

int board[101][101];
int area[101][101];
int dist[101][101];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

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

    memset(dist, -1, sizeof(dist));
    queue<pair<int, int>> q;
    int area_num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] && !area[i][j])
            {
                area[i][j] = area_num++;
                q.push(make_pair(i, j));
                while (!q.empty())
                {
                    auto cur = q.front();
                    q.pop();
                    for (int i = 0; i < 4; i++)
                    {
                        int nx = cur.first + dx[i];
                        int ny = cur.second + dy[i];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                            continue;
                        if (!board[nx][ny] || area[nx][ny])
                            continue;
                        area[nx][ny] = area[cur.first][cur.second];
                        q.push(make_pair(nx, ny));
                    }
                }
            }
        }
    }

    // area의 각 점을 돌면서 섬의 가장자리를 탐색하고 그 점에서부터 bfs를 시작
    // 섬의 가장자리 조건 : board(i,j) == 0 && 주변 4개의 점중에서 board[nx][ny] > 0 인 i,j

    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int start_x = i;
            int start_y = j;
            bool is_near_area = false;
            if (!board[i][j])
            {
                int near_area;
                for (int k = 0; k < 4; k++)
                {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                        continue;
                    if (board[nx][ny] > 0)
                    {
                        near_area = area[nx][ny];
                        is_near_area = true;
                        break;
                    }
                }
                if (is_near_area)
                {
                    bool found_bridge = false;
                    dist[i][j] = 1;
                    q.push(make_pair(i, j));
                    while (!q.empty())
                    {
                        auto cur = q.front();
                        q.pop();
                        for (int i = 0; i < 4; i++)
                        {
                            int nx = cur.first + dx[i];
                            int ny = cur.second + dy[i];
                            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                                continue;
                            if (board[nx][ny] > 0 && area[nx][ny] != near_area) // 다리를 연결함
                            {
                                ans = min(dist[cur.first][cur.second], ans);
                                // cout << "(" << start_x << "," << start_y << ") 출발섬 : "<< near_area << " (" << cur.first << "," << cur.second << ") 도착섬 : " << area[nx][ny]<< " 거리 :" << dist[nx][ny] << "ans :" << ans << "\n";
                                q = {}; // 큐를 비워줌
                                memset(dist, -1, sizeof(dist));
                                found_bridge = true;

                                break;
                            }
                            if (!board[nx][ny] && dist[nx][ny] == -1)
                            {
                                dist[nx][ny] = dist[cur.first][cur.second] + 1;
                                q.push(make_pair(nx, ny));
                            }
                        }
                        if (found_bridge)
                            break;
                    }
                }
            }
        }
    }
    cout << ans;
}