/* Read three integer values and find the largest among them
Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include<stdio.h>
#include<conio.h>

int main()
{   int a,b,c;
    printf("Enter the no 1\n");
    scanf("%d",&a);
    printf("Enter the no 2\n");
    scanf("%d",&b);
    printf("Enter the no 3\n");
    scanf("%d",&c);
     if(a>b&&a>c) 
     printf("%d is largest",a);
     else if(b>a&&b>c)
     printf("%d is largest",b);
     else if(c>a&&c>b)
     printf("%d is largest",c);
     else printf("Error: Invalid");

     return 0;
}    



