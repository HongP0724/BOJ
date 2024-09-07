#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[1000000];
    scanf("%[^\n]s",word);
    int len = strlen(word), count = 0;
    if(len == 1 && word[0]==' ') count--;
    else
    {
        for(int i=1;i<len-1;i++)
        {
            if(word[i]==' ') count++;
        }
    }
    printf("%d",count+1);
}
