/*Read n integers, store them in an array and sort the elements in an array using Bubble sort Algorithm
Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
int main()
 {
  int array[1000],n,i,j,s;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  printf("Enter %d integers\n", n);

   for (i=0;i<n;i++)
     {
       scanf("%d",&array[i]);
     }
        for (i=0;i<n-1;i++)
        {
           for (j=0;j<n-i-1;j++)
            {
              if (array[j]>array[j+1])
               {
                        s=array[j];
                        array[j]= array[j+1];
                        array[j+1]=s;
               }
            }
        }
         printf("Sorted list in ascending order:\n");
          for (i=0;i<n;i++)
          {
            printf("%d\t",array[i]);
          }
       return 0;
 }