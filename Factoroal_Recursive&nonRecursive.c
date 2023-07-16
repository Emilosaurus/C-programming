
 /* Find the factorial of a given Natural number
 n using recursive and non recursive functions
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include<conio.h>
int fact( int n);
int rfact( int n);
int main() 
{
    int num;
    printf("\n Enter the no to find Factorial :");
    scanf("%d", &num);
    printf("\n Non recursive soln:  %d", fact(num));
    printf("\n  Recursive soln:  %d", rfact(num));
    return 0;

}
  int fact( int n )
  {
      int i, fact=1;
      for (i=1; i<=n; i++)
        fact=fact*i;
        return fact;
  }    
  int rfact( int n )
  {
    if(n==0) return 1;
    if (n==1)return 1;
    else  return n*rfact(n-1);
  }