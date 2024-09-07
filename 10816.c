#include <stdio.h>

int arr[20000001];

int main(void)
{
    int m,n;
    int temp;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&temp);
        arr[temp+10000000]++;
    }

    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&temp);
        printf("%d ",arr[temp+10000000]);
    }
}