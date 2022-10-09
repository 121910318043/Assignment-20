#include<stdio.h>
//Write a program to print the elements of an array in reverse order.
int main()
{
    int i,n,j,t;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    int *p=a;
    printf("Enter elements in the array ");
    for(i=0;i<n;i++)
    {
        scanf("%d ",&(*(p+i)));
    }
    j=i-1;
    for(i=0;i<(n/2);i++)
    {
        t=*(p+i);
        *(p+i)=*(p+j);
        *(p+j)=t;
        j--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
