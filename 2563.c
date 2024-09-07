#include <stdio.h>

int main(void)
{
    int arr[100][100] = {0,};
    int n, x, y, area=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x, &y);
        x--,y--;
        for(int i=x;i<x+10;i++)
            for(int j=y;j<y+10;j++)
                arr[i][j] = 1;
    }
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            if(arr[i][j]) area++;
    printf("%d",area);
}