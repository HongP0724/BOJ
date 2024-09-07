#include <stdio.h>

int main(void)
{
    int arr[100][100];
    int row,col,num;
    scanf("%d %d",&row, &col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",*(arr+i)+j);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&num);
            arr[i][j]+=num;
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }

}