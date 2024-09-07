#include <stdio.h>

int arr[8001]={0,};

int main(void)
{
    int n,num, total=0,middle=0,middle_num,max=0,max_num,scope_start,scope_last,flag = 0,middle_flag = 0,cnt=0,max_flag;
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
            max_flag = 0;
            total += (i-4000) * arr[i];
            middle += arr[i];
            if(!middle_flag && middle >= (n+1)/2)
            {
                middle_flag = 1;
                middle_num = i-4000;
            }

            if(arr[i]>max)
            {
                cnt = 1;
                max = arr[i];
                max_flag = 1;
            }

            if(!max_flag && arr[i] == max && cnt < 2)
            {
                cnt += 1;
                max = arr[i];
            }
            
            max_num = i-4000;
            if(!flag)
            {
                scope_start = i;
                flag = 1;
            }
            scope_last = i;
        }
    }
    printf("%d\n%d\n%d\n%d",(int)((double)total/n + 0.5),middle_num,max_num,scope_last-scope_start);
}