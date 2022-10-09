#include<stdio.h>
//Write a function to swap strings of two char arrays of calling functions.
void swapstr(char*,char*);
int main()
{
    char a1[30],a2[30];
    printf("Enter Two strings: ");
    fgets(a1,30,stdin);
    fgets(a2,30,stdin);
    swapstr(a1,a2);
    printf("%s",a1);
    printf("%s",a2);
    return 0;
}
void swapstr(char *p,char *q)
{
    int i;
    char t;
    for(i=0;*(p+i)||*(q+i);i++)
    {
        t=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=t;
    }
}
