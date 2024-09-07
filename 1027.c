#include <stdio.h>

int main(void)
{
    int t,k, max = 0;
    int arr[50];
    int answer[50]={0,};
    double max_sight_arrow, min_sight_arrow;
    double another_sight_arrow;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",arr+i);
    }

    for(int i=0;i<t;i++)
    {

        for(int j=0;j<t;j++)
        {
            if(j == i) continue;
            if(i==j-1 || i==j+1)
            {
                answer[i]++;
                continue;
            }
            if(i<j)
            {
                max_sight_arrow = (double)(arr[j]-arr[i])/(j-i);
                for(k = i+1; k<j;k++)
                {
                    another_sight_arrow = (double)(arr[k] - arr[i])/(k-i);
                    if(another_sight_arrow >= max_sight_arrow)
                        break;  
                }
                if(k==j) answer[i]++;
            }
            if(i>j)
            {
                min_sight_arrow = (double)(arr[j]-arr[i])/(j-i);
                for(k = j+1; k<i;k++)
                {
                    another_sight_arrow = (double)(arr[k] - arr[i])/(k-i);
                    if(another_sight_arrow <= min_sight_arrow)
                        break;
                }
                if(k==i) answer[i]++;
            }

        }
    }
    for(int i=0;i<t;i++)
    {
        if(answer[i]>max)
            max = answer[i];
    }
    printf("%d",max);
}