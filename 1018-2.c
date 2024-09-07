#include <stdio.h>

int main(void)
{
    int m,n,correct_tile;
    char table[50][51];
    char answer[50][43];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%s",table[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-7;j++)
        {
            correct_tile = 0;
            for(int k=j;k<j+8;k++)
            {
                if((k-j)%2)     //홀수번째 조사
                {
                    if(table[i][k] == 'W')
                        correct_tile++;
                }
                else
                {
                    if(table[i][k] == 'B')
                        correct_tile++;
                }
            }
            answer[i][j] = correct_tile;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m-7;j++)
        {
            printf("%d ",answer[i][j]);
        }
        printf("\n");
    }
}