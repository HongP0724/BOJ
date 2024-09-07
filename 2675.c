#include <stdio.h>
#include <string.h>

int main(void)
{
    int t, r, len, p;
    char word[21];
    char new_word[169];
    char c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &r);
        scanf("%s",word);
        len = strlen(word);
        p=0;
        for(int i=0;i<len;i++)
        {
            c = word[i];
            for(int j=0;j<r;j++)
            {
                new_word[p++] = c;
            }
        }
        new_word[p] = 0;
        printf("%s\n",new_word);
    }
    
}