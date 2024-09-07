#include <stdio.h>

char table[50][50];

int check_chess(char table[][50], int a, int b)
{
    int cnt = 0;
    for(int i=a;i<a+8;i++)
    {
        for(int j=b;j<b+8;j++)
        {
            if((i+j)%2==0)
            {
                if(table[i][j] == 'B')
                    cnt++;
            }
            else
            {
                if(table[i][j] == 'W')
                    cnt++;
            }
        }
    }

    return cnt > 64-cnt ? 64-cnt : cnt;
}

int main(void)
{
    int n,m;
    scanf("%d %d",&n, &m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf(" %c",&table[i][j]);
        }
    }

    int global_min = 64;
    for(int i=0;i<n-7;i++)
    {
        for(int j=0;j<m-7;j++)
        {
            int temp = check_chess(table,i,j);
            if(temp < global_min)
            {
                global_min = temp;
            }
        }
    }

    printf("%d",global_min);
}