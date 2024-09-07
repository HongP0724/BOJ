#include <stdio.h>
#include <string.h>

int main(void)
{
    int i,len;
    char number[6];
    while(1)
    {
        scanf("%s",number);
        len = strlen(number);
        if(len == 1 && number[0] == '0') break;
        for(i=0;i<=len/2;i++)
        {
            if(number[i]!=number[len-1-i]) break;
        }
        if(i == len/2+1) printf("yes\n");
        else printf("no\n");
    }
}