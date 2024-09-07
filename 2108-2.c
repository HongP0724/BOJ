#include <stdio.h>
#include <math.h>

int arr[8001]={0,};

int main(void)
{
    int n,num;
    int total = 0, sum_of_cnt=0, middle;
    int mode=-4000, scope_first, scope_last, scope_flag=0, second_flag = 0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&num);
        arr[num+4000] += 1;
    }

    for(int i=0;i<8001;i++)
    {
        if(arr[i])
        {
            total += arr[i] * (i-4000);
        }
    }

    for(int i=0;i<8001;i++)
    {
        if(arr[i])
        {
            sum_of_cnt += arr[i];
            if(sum_of_cnt >= (n+1)/2)
            {
                middle = i-4000;
                break;
            }
        }
    }

    for(int i=1;i<8001;i++)
    {
        if(arr[i])
        {
            if(arr[i] > arr[mode+4000])
            {
                mode = i-4000;
                second_flag = 0;
            }

            else if(!second_flag && arr[i] == arr[mode + 4000])
            {
                mode = i-4000;
                second_flag = 1;
            }
        }
    }

    for(int i=0;i<8001;i++)
    {
        if(arr[i])
        {
            if(!scope_flag)
            {
                scope_first = i-4000;
                scope_flag = 1;
            }
    
            scope_last = i-4000;
        }
    }

    printf("%d\n%d\n%d\n%d",(int)round((double)total/n),middle,mode,scope_last-scope_first);
}