#include <stdio.h>

int main(void)
{
    int k,n,arr[10000];
    long long sum = 0, start,count,left,right,mid,ans;
    scanf("%d %d",&k, &n);
    for(int i=0;i<k;i++)
    {
        scanf("%d",arr+i);
        sum+=arr[i];
    }
    start=sum/n;
    left = 0;
    right = start;
    while(right-left>1)
    {
        count=0;
        mid = (right+left)/2;
        for(int i=0;i<k;i++)
        {
            count+=(arr[i]/mid);
        }
        if(count>=n)
            left = mid;
        else if(count < n)
            right = mid - 1;
    }
    if(left==right) ans = left;
    else if(left+1 == right)
    {
        count = 0;
        for(int i=0;i<k;i++)
        {
            count+=(arr[i]/right);
        }
        if(count>=n) ans = right;
        else ans = left;
    }
    printf("%d",ans);
}