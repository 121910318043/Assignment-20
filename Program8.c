#include<stdio.h>
//Write a program to compute the sum of all elements in an array using pointers.
int main()
{
    int i,sum=0,n;
    printf("Enter Size of the array: ");
    scanf("%d",&n);
    int arr[n];
    int *p=&arr[0];
    printf("Enter elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&(*(p+i)));
        sum=sum+(*(p+i));
    }
    printf("Sum of elements = %d",sum);
    return 0;
}
