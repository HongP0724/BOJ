#include <stdio.h>

int main(void)
{
    int ch, cm, t;
    scanf("%d %d %d",&ch, &cm, &t);

    cm+=t%60;
    ch+=t/60;
    if(cm>=60)
    {
        cm-=60;
        ch++;
    }

    ch%=24;
    printf("%d %d",ch, cm);
}