#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[16], c;
    scanf("%s",word);
    int len = strlen(word), sum = 0;
    for(int i=0;i<len;i++)
    {
        c = word[i];
        if(c<='C') sum+=3;
        else if(c<='F') sum+=4;
        else if(c<='I') sum+=5;
        else if(c<='L') sum+=6;
        else if(c<='O') sum+=7;
        else if(c<='S') sum+=8;
        else if(c<='V') sum+=9;
        else sum+=10;
    }
    printf("%d",sum);
}