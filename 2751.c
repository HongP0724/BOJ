#include <stdio.h>
#include <stdlib.h>

int arr[1000000];

int compare(const void * num1, const void * num2)
{
    if (*(int*)num1 > *(int*)num2)
        return 1;
    else if (*(int*)num1 < *(int*)num2)
        return -1;
    else
        return 0;
}

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    qsort(arr,n,sizeof(int),compare);

    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}