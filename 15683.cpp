#include <bits/stdc++.h>
using namespace std;

int board[10][10];
int checked[10][10];
vector<pair<int, int>> location;
vector<int> type;
vector<int> direction;
int cam_count;
int ans = 0;
int n, m;
int wall = 0;

int dx[4] = {0, -1, 0, 1};
int dy[4] = {-1, 0, 1, 0};

int directions(int type)
{
    if (type == 2)
        return 2;
    if (type == 5)
        return 1;
    return 4;
}

int counts(int type)
{
    if (type == 1)
        return 1;
    if (type == 2 || type == 3)
        return 2;
    return type - 1;
}

void shoot(int idx)
{
    int x = location[idx].first;
    int y = location[idx].second;
    int ty = type[idx];
    int dir = direction[idx];

    checked[x][y] = 1;

    for (int i = 0; i < counts(ty); i++)
    {
        int nx = x;
        int ny = y;
        while (1)
        {
            nx = nx + dx[dir];
            ny = ny + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                break;
            if (board[nx][ny] == 6)
                break;
            checked[nx][ny] = 1;
        }
        if (ty == 2)
            dir = (dir + 2) % 4;
        else
            dir = (dir + 1) % 4;
    }
}

void draw()
{
    int cnt = 0;
    for (int i = 0; i < cam_count; i++)
    {
        shoot(i);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (checked[i][j])
                cnt++;
        }
    }
    ans = max(ans,cnt);

    memset(checked,0,sizeof(checked));
}

void solution(int k)
{
    if (k == cam_count)
    {
        draw();
        return;
    }

    for (int i = 0; i < directions(type[k]); i++)
    {
        direction[k] = i;
        solution(k + 1);
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> board[i][j];
            if (board[i][j] >= 1 && board[i][j] <= 5)
            {
                location.push_back(make_pair(i, j));
                type.push_back(board[i][j]);
                direction.push_back(1);
                cam_count++;
            }
            else if(board[i][j]==6)
                wall++;
        }
    }

    solution(0);
    cout << n*m - ans - wall;
}