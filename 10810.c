#include <stdio.h>

int main(void)
{
    int arr[100]={0,}, start, end, number, size, t;
    scanf("%d %d",&size, &t);
    while(t--)
    {
        scanf("%d %d %d",&start,&end,&number);
        for(int i=start-1;i<end;i++) arr[i] = number;
    }
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}