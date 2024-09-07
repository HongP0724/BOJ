#include <stdio.h>

int main(void)
{
    int arr[201] = {0,}, n, num, v;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        arr[num+100]++;
    }
    scanf("%d",&v);
    printf("%d",arr[v+100]);
}