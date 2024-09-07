#include <stdio.h>

int main(void)
{
    int m,n,correct_tile,max=32;
    char table[50][51];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%s",table[i]);
    }

    for(int i=0;i<n-7;i++)
    {
        for(int j=0;j<m-7;j++)
        {
            correct_tile = 0;
            for(int k=i;k<i+8;k++)
            {
                for(int l=j;l<j+8;l++)
                {
                    if(((k-i+l-j)%2 && table[i][j] != table[k][l]) || (!((k-i+l-j)%2) && table[i][j] == table[k][l])) correct_tile++;
                }
            }
            correct_tile = correct_tile<33 ? 64 - correct_tile : correct_tile;
            if(correct_tile > max) max = correct_tile;
        }
    }
    printf("%d",64-max);
}