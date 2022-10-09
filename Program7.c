#include<stdio.h>
//Write a program to count the number of vowels and consonants in a string using a pointer.
int main()
{
    char str[30];
    int i,v=0,c=0;char *p = str;
    printf("Enter a string: ");
    fgets(str,30,stdin);
    for(i=0;*(p+i);i++)
    {
        if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
        {
            v++;
        }
        else
            c++;
    }
    printf("vovel in %s = %d\n",str,v);
    printf("consonents in %s = %d",str,c-1);
}
