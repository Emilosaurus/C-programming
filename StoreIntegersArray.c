/*C Program to store N integers in an array and display the sum of integers  in the array 
  Name: Emil Saj Abraham
  Class: A.I
  Roll no: 28
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int A[100],n,i;
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the array\n");
      for(i=0;i<n;i++)
      {
          scanf("%d",&A[i]);
      }

      for(i=0;i<n;i++)
      {
          printf("%d \t",A[i]);
      }

  return 0;

}