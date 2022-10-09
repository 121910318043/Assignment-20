#include<stdio.h>
//Write a program to calculate the length of the string using a pointer
int main()
{
    char str[30];
    char *p=str;
    printf("Enter a string ");
    fgets(str,30,stdin);
    int i;
    for(i=0;*(p+i);i++);
    printf("%d ",i-1);
}
