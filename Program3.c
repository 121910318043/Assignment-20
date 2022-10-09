#include<stdio.h>
//Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ].
void sort(int *ptr,int size);
int main()
{
    int n;int i;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in the array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void sort(int *ptr, int n)
{
    int i,t,j;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
}
