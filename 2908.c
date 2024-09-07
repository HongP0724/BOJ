#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[4];
    char b[4];
    char * answer;
    scanf("%s",a);
    scanf("%s",b);
    for(int i=0;i<3;i++)
    {
        if(a[2-i] == b[2-i])
            continue;
        if(a[2-i] > b[2-i])
        {
            answer = a;
            break;
        }
        answer = b;
        break;
    }
    printf("%c%c%c",answer[2],answer[1],answer[0]);
}