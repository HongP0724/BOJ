#include <bits/stdc++.h>
using namespace std;
int board[70][70];

int check(int n, int r, int c)
{
    for (int i = r; i < r + n; i++)
    {
        for (int j = c; j < c + n; j++)
        {
            if (board[i][j] != board[r][c])
                return false;
        }
    }
    return true;
}

void solution(int n, int r, int c)
{
    if (check(n, r, c))
    {
        cout << board[r][c];
        return;
    }

    cout << "(";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            solution(n / 2, r + i * n / 2, c + j * n / 2);
        }
    }
    cout << ")";
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            board[i][j] = s[j] - '0';
        }
    }

    solution(n, 0, 0);
}
