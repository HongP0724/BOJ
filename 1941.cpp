#include <bits/stdc++.h>
using namespace std;

// 25개의 블록중 순서 상관없이 7개를 선택 (25C7)
// 뽑은 7개가 S가 4개 이상인지 확인
// 뽑은 7개가 모두 이어져 있는지 확인 (너비우선탐색 flood fill)

char board[5][5];
int visited[5][5];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
int ans;

int bfs(int n)
{
    int check[5][5] = {0,};
    int x = n / 5;
    int y = n % 5;
    int area = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(x, y));
    check[x][y]= 1;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        area++;
        for (int i = 0; i < 4; i++)
        {
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if (nx < 0 || nx > 4 || ny < 0 || ny > 4)
                continue;
            if (visited[nx][ny] != 1 || check[nx][ny] != 0)
                continue;
            q.push(make_pair(nx, ny));
            check[nx][ny] = 1;
        }
    }
    return (area == 7);
}

// k = 몇번째 블록을 고르는지
// cnt = 현재까지 고른 s의 개수
// pre = 이전에 고른 블록의 위치
void solve(int k, int cnt, int pre)
{
    if (k == 7)
    {
        if (cnt >= 4)
        {
            if (bfs(pre))
                ans++;
        }
        return;
    }

    for(int i = pre+1;i<25;i++)
    {
        int n_cnt = cnt;
        visited[i/5][i%5] = 1;
        if(board[i/5][i%5]=='S')
        {
            n_cnt+=1;
        }
        solve(k+1,n_cnt,i);
        visited[i/5][i%5] = 0;
    }
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> board[i][j];

    solve(0,0,-1);
    cout << ans;
}