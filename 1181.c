#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int static compare(const void * first, const void * second)
{
    char * a = (char *) first;
    char * b = (char *) second;
    if(strlen(a) > strlen(b)) return 1;
    else if(strlen(a) < strlen(b)) return -1;
    else
    {
        if(strcmp(a,b) > 0) return 1;
        else if(strcmp(a,b) < 0) return -1;
        else return 0;
    }
}
int main(void)
{
    char str_table[20000][51];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",str_table[i]);
    }

    qsort(str_table, n, sizeof(char) * 51, compare);
    for(int i=0;i<n;i++)
    {
        if(i==n-1 || strcmp(str_table[i],str_table[i+1]))
            printf("%s\n",str_table[i]);
    }
}