#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int twoSum=0;
    int fiveSum=0;
    int temp;
    for(int i=1;i<=n;i++)
    {
        temp = i;
        while(temp%2==0)
        {
            temp/=2;
            twoSum++;
        }
        temp = i;
        while(temp%5==0)
        {
            temp/=5;
            fiveSum++;
        }
    }
    printf("%d",twoSum>fiveSum?fiveSum:twoSum);
}