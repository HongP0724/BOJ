#include <stdio.h>

int main(void)
{
    int arr[8],flag = 3;
    for(int i=0;i<8;i++)
    {
        scanf("%d",arr+i);
    }

    for(int i=0;i<8;i++)
    {
        if(i==0)
        {
            if(arr[i] == i+1) flag = 1;
            else if(arr[i] == 8-i) flag = 2;
            else
            {
                flag = 3;
                break;
            }
        }

        else
        {
            if((flag == 1 && arr[i] != i+1) || (flag == 2 && arr[i] != 8-i))
            {
                flag = 3;
                break;
            }
        }
    }

    if(flag == 1)
        printf("ascending");
    else if(flag == 2)
        printf("descending");
    else
        printf("mixed");
}

//브론즈2 문제인데 3번이나 틀리고 짠 코드도 뭔가 마음에 안든다. 아직도 많이 부족하다.