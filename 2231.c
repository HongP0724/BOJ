#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int digit;
    int temp;
    int sum;
    for(int i=1;i<n;i++)
    {
        sum = 0;
        temp = i;
        while(temp!=0)
        {
            digit = temp%10;
            sum += digit;
            temp/=10;
        }
        sum += i;
        if(sum == n)
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("%d",0);
    return 0;

}