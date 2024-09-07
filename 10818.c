#include <stdio.h>

int main(void)
{
    int arr[1000000], n, min, max;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    min = arr[0];
    max = min;
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max) max = arr[i];
    }
    printf("%d %d",min, max);
}