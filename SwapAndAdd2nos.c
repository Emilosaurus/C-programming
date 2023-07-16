/*Do the following using pointers
i) add two numbers
ii) swap two numbers using a user defined function
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
int swap(int *xpoint, int *ypoint)
{
    int temp = *xpoint;
    *xpoint = *ypoint;
    *ypoint = temp;
}
int main()


{
       int first_num, second_num, *p, *q, sum,x,y;
       printf("\n\nEnter 2 numbers:");
       scanf("%d%d", &first_num, &second_num);
       p = &first_num;
       q = &second_num;
       sum = *p + *q;
       printf("Sum is %d\n\n", sum);
       printf("Enter value of x ");
       scanf("%d", &x);
       printf("\nEnter value of y ");
       scanf("%d", &y);
       swap(&x, &y);
       printf("\nAfter swapping, x = %d & y = %d", x, y);

       


       return 0;
  
}