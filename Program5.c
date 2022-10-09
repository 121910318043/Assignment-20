#include<stdio.h>
//Write a program to find the maximum number between two numbers using a pointer
int main()
{
    int a,b;
    int *p=&a,*q=&b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(*p>*q)
        printf("%d",*p);
    else
        printf("%d",*q);
}
