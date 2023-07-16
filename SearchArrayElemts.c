/*
Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int a[20],n,i,s;
    printf("enter the no of elements\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the value to search\n ");
     scanf("%d",&s);
     for (i=0;i<n;i++)
    {
        if (a[i]==s) 
        printf("The value is %d found in %d \n",a[i],i);
    }
   return 0;
}