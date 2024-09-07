#include <bits/stdc++.h>
using namespace std;
bool board[2200][2200];

void draw(int n, int r, int c)
{
    if(n==1)
    {
        board[r][c] = 1;
        return;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==1 && j==1)
                continue;
            draw(n/3,r+i*n/3,c+j*n/3);
        }
    }

}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    draw(n,0,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!board[i][j])
            {
                cout << ' ';
                continue;
            }
            cout << '*';
        }
        cout << '\n';
    }
}