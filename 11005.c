#include <stdio.h>
#include <string.h>

int main(void)
{
    char N[31];
    int B,D,i,k,len = 0;
    scanf("%d %d",&D,&B);
    while(D>0)
    {
        k = D%B;
        N[len++] = k>=10?k-10+'A':k+'0';
        D/=B;
    }

    for(i=len-1;i>=0;i--)
        printf("%c",N[i]);
}