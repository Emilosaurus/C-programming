/*C program to read an integer and check if it is 
odd or even.
  Name: Emil Saj Abraham
  Class: A.I
  Roll no: 28
*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a%2!=0)
    {
        printf("\n %d is odd number",a);
        
    }
    return 0;
}