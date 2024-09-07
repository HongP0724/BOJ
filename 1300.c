#include <stdio.h>
#include <stdlib.h>

int compare(const void * a, const void * b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if(num1 < num2) return -1;
    if(num2 < num1) return 1;
    return 0;
}

int main(void)
{
    int n, idx, k=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            arr[k++] = i*j;
        }
    }
    qsort(arr,n*n,sizeof(int),compare);
    scanf("%d",&idx);
    printf("%d",arr[idx-1]);
}