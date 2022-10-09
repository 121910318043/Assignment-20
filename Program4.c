#include<stdio.h>
int main()
{
    int *p,i=10;
    p=&i;
    printf("address of %d = %d \n",i,p);
    printf("value of i using pointer = %d ",*p);
    return 0;
}
