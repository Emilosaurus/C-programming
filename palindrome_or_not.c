/* C Program to find whether a number is a palindrome number or not.
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include <conio.h>
int main()
{int temp,a,digit,r=0;
  printf("Enter the Number\n");
  scanf("%d",&a);
  temp=a;
  while(a>0)
  {
    digit=a%10;
    a=a/10;
    r=r*10+ digit;
  }
  printf("The reversed no is %d\n",r);
  if (r==temp)
 printf("The Number is palindrome");
 else printf("The Number is not palindrome");
} 
