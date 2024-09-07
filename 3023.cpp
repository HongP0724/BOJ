#include <stdio.h>

int main(void)
{
    int row, col;
    char card[row*2][col*2]={0,};
    scanf("%d %d",&row, &col);
    for(int i=0;i<row;i++)
    {
        scanf("%s",card[i]);
    }

}