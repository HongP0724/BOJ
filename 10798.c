#include <stdio.h>
#include <string.h>

int main(void)
{
    char table[5][16]={0,};
    for(int i=0;i<5;i++)
    {
        scanf("%s",table[i]);
    }

    for(int j=0;j<15;j++)
    {
        for(int i=0;i<5;i++)
        {
            if(!table[i][j]) continue;
            printf("%c",table[i][j]);
        }
    }
}