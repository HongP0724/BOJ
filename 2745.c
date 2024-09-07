#include <stdio.h>
#include <string.h>

int main(void)
{
    char N[31];
    int B,D = 0,k,j,i;
    scanf("%s %d",N,&B);
    int len = strlen(N);
    for(i=0;i<len;i++)
    {
        k = N[i];
        k = k>='A' ? k-'A'+10 : k-'0';
        for(j=0;j<len-1-i;j++,k*=B);
        D+=k;
    }
    printf("%d",D);

}