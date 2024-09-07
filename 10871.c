#include <stdio.h>

int main(void)
{
    int n, x, num, p=0;
    int arr[10000];
    scanf("%d %d",&n, &x);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        if(num>=x) continue;
        arr[p++] = num;
    }
    for(int i=0;i<p;i++)
    {
        printf("%d ",arr[i]);
    }
}