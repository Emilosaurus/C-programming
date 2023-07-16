/* . Compute sum of the elements stored in an array using pointers and user defined function.
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include<stdio.h>
#include<conio.h>
int sumOfArray(int arr[10],int n);
int main()
{
 int arr[10],n,i;
 int *ptr=arr;
 printf("\n\n\nEnter the number of elements you want to use(<=10): ");
 scanf("%d",&n);
 printf("\nEnter %d Elements:",n);
     for (i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("\nSum = %d",sumOfArray(arr,n));
     getch();
}

    int sumOfArray(int arr[10],int n)
    {
     int i,sum=0;
     for(i=0;i<n;i++)
        sum+=arr[i];
     return sum;
     }
