#include <stdio.h>

int main(void)
{
    int max = -1, num, row, col;    
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
        {
            scanf("%d",&num);
            if(num>max)
            {
                max = num;
                row = i;
                col = j;
            }
        }
    printf("%d\n%d %d",max,row+1,col+1);
}