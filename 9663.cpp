#include <bits/stdc++.h>
using namespace std;

int not_safe[15][15];

void fill_board(int n, int r, int c)
{
    for (int i = 0; i < n; i++)
    {
        not_safe[r][i]++;
        not_safe[i][c]++;
    }
    not_safe[r][c]--;
}

void erase_board(int n, int r, int c)
{
    for (int i = 0; i < n; i++)
    {
        not_safe[r][i]--;
        not_safe[i][c]--;
    }
    not_safe[r][c]++;
}

int solution(int n, int k)
{
    int ans = 0;
    if (k == n)
    {
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << not_safe[i][j] << " ";
                if (!not_safe[i][j])
                {
                    ans++;
                }
            }
            cout << "\n";
        }
        return ans;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (!not_safe[i][j])
            {
                fill_board(n, i, j);
                ans += solution(n,k+1);
                erase_board(n, i, j);
            }
        }
    }

    return ans;
}

int main(void)
{
    int n;
    cin >> n;
    cout << solution(n,1);
}