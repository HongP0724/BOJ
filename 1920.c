#include <stdio.h>
#include <stdlib.h>

int compare(const void * first, const void * second)
{
    int num1 = *(int *)first;
    int num2 = *(int *)second;

    if(num1 < num2) return -1;
    if(num2 < num1) return 1;
    return 0;
}

int main(void)
{
    int arr[100000];
    int n,m,target,flag,first,last,mid;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);
    qsort(arr,n,sizeof(int),compare);
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&target);
        flag = 0;
        first = 0;
        last = n-1;
        while(first<=last)
        {
            mid = (first+last)/2;
            if(arr[mid]>target)
            {
                last = mid - 1;
            }
            else if(arr[mid] < target)
            {
                first = mid + 1;
            }
            else
            {
                flag = 1;
                break;
            }
        }

        if(!flag)
            printf("0\n");
        else
            printf("1\n");
    }
    
}