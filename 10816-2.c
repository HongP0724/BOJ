#include <stdio.h>
#include <stdlib.h>

int arr[500000];

int compare(const void * ptr1,const void * ptr2)
{
    int num1 = *(int *)ptr1;
    int num2 = *(int *)ptr2;

    if(num1 < num2)
    {
        return -1;
    }

    else if(num1 > num2)
    {
        return 1;
    }

    else
        return 0;
}

int lower_bound(int arr[], int size, int target)
{
    int lo = -1;
    int hi = size;
    int mid;

    while(lo+1 < hi)
    {
        mid = (lo+hi)/2;
        if(arr[mid] >= target)
            hi = mid;
        else
            lo = mid;
    }
    return hi;
}

int upper_bound(int arr[], int size, int target)
{
    int lo = -1;
    int hi = size;
    int mid;

    while(lo+1 < hi)
    {
        mid = (lo+hi)/2;
        if(arr[mid] > target)
            hi = mid;
        else
            lo = mid;
    }
    return hi;
}

int main(void)
{
    int m,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    qsort(arr,n,sizeof(int),compare);

    scanf("%d",&m);
    int temp, low, up;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&temp);
        
        low = lower_bound(arr, n, temp);
        up = upper_bound(arr, n, temp);
        printf("%d ",up-low);
    }

}