#include<stdio.h>
//10. Write a program to print a string in reverse using a pointer
int main()
{
    int i,j;
    char str[30];
    char t;
    printf("Enter a string: ");
    fgets(str,30,stdin);
    char *p = &str[0];
    for(i=0;*(p+i);i++);
    j=i-1;
    for(i=0;i<j;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
        j--;
    }
    printf("%s ",p);
    return 0;
}
