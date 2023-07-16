/*menu driven program for performing matrix addition, multiplication and finding the
transpose. Use functions to 
(i) read a matrix, 
(ii) find the sum of two matrices, 
(iii) find the product of two matrices, 
(i) find the transpose of a matrix and (v) display a matrix.
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include <string.h>
int main()
{
int a,b,p,q,c,d,k,s=0;
  int x[100][100],y[100][100],m[100][100];
  printf("Enter the number of rows and columns of first matrix\n");
  scanf("%d %d",&a,&b);
  printf("\nEnter the values of first matrix\n");
  for(c=0;c<a;c++)
    for(d=0;d<b;d++)
      scanf("%d",&x[c][d]);
       printf("\nEnter the number of rows and columns of second matrix\n");
       scanf("%d%d",&p,&q);
  if(b!=p)
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  else
   {
    printf("Enter the values of second matrix\n");
    for(c=0;c<p;c++)
      for (d=0;d<q;d++)
        scanf("%d",&y[c][d]);
       for(c=0;c<a;c++)
        {
         for(d=0;d<q;d++)
          {
           for (k=0;k<p;k++)
            {
             s=s+x[c][k]*y[k][d];
            }
             m[c][d]=s;
             s=0;
          }
        }
    printf("Product of two matrices:\n");
    for (c=0;c<a;c++)
     {
      for (d=0;d<q;d++)
       printf("%d\t",m[c][d]);
       printf("\n");
     }
  }
  return 0;
 }
