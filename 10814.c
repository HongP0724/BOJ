#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int age;
    char name[101];
} User;

int compare(const void * first, const void * second)
{
    User * a = (User *)first;
    User * b = (User *)second;

    if(a->age < b->age)
        return -1;
    else if(a->age > b->age)
        return 1;
    else
        return 0;
}

int main(void)
{
    User * list;
    int n;
    scanf("%d",&n);
    list = (User *)malloc(sizeof(User) * n);

    for(int i=0;i<n;i++)
    {
        scanf("%d %s",&list[i].age, list[i].name);
    }

    qsort(list, n, sizeof(User), compare);

    for(int i = 0; i < n; i++)
    {
        printf("%d %s\n",list[i].age, list[i].name);
    }


}