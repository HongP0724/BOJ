#include <bits/stdc++.h>
using namespace std;

int board[41][41];
int sticker[11][11];
int n, m, k;
int r, c;
int ans;

//(i,j)에 스티커를 붙일수 있는지 검사
int check(int i, int j)
{
    for (int k = 0; k < r; k++)
    {
        for (int l = 0; l < c; l++)
        {
            if (sticker[k][l])
            {
                if (board[i + k][j + l])
                    return 0;
            }
        }
    }
    return 1;
}

//왼쪽 위부터 시작해서 스티커를 붙일수 있으면 스티커 부착
int paste()
{
    for (int i = 0; i < n - r + 1; i++)
    {
        for (int j = 0; j < m - c + 1; j++)
        {
            if (check(i, j))
            {
                for (int k = 0; k < r; k++)
                {
                    for (int l = 0; l < c; l++)
                    {
                        if (sticker[k][l])
                            board[i + k][j + l] = sticker[k][l];
                    }
                }
                return 1;
            }
        }
    }
    return 0;
}

//스티커를 시계방향으로 90도 회전
void rotate()
{
    int temp_arr[11][11];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            temp_arr[i][j] = sticker[i][j];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sticker[j][r - 1 - i] = temp_arr[i][j];
    int temp = r;
    r = c;
    c = temp;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m >> k;

    for (int t = 0; t < k; t++)
    {
        cin >> r >> c;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> sticker[i][j];
            }
        }
        for (int cnt = 0; cnt < 4; cnt++, rotate())
        {
            if (paste())
                break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j])
                ans++;
        }
    }

    cout << ans;
}