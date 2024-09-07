#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, m, b;
    int sum=0, avr, min_time, min_floor;
    scanf("%d %d %d", &n, &m, &b);

    int ** arr = (int **)malloc(sizeof(int *) * n);

    for(int i=0;i<n;i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * m);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
            sum+=arr[i][j];            
        }
    }

    avr=(sum+b)/(m*n);
    
    for(int floor=0;floor<=avr;floor++)
    {
        int time=0,flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                time+=(floor>arr[i][j]?(floor-arr[i][j]):(arr[i][j]-floor)*2);
                if(floor!=0 && time>min_time)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }

        if(flag==0)
        {
            min_time = time;
            min_floor = floor;
        }
    }

    printf("%d %d\n", min_time,min_floor);
}