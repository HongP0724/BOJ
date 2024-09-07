#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101], c;
    scanf("%s",word);
    int len = strlen(word), num = len;
    for(int i=0;i<len;i++)
    {
        c=word[i];
        switch(c)
        {
            case '-':
                num--;
                break;
            case '=':
                if(i>1&&word[i-1]=='z'&&word[i-2]=='d')
                    num--;
                num--;
                break;
            case 'j':
                if(i>0&&word[i-1]=='n'||word[i-1]=='l')
                    num--;
                break;
        }
    }
    printf("%d",num);
}