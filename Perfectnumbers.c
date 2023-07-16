/*C program to find the perfect numbers in the range 1 to 100
Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int sum=0,i,a=1;
    printf("\n The perfect nos from 1 to 100 :\n");
    for(i=1;i<=100;i++)
    {
        a=1;
        while(a<=(i/2))
        {
            if(i%a==0)
            {
              sum+=a;
            }  
         a++;
        }
     if(sum==i)
         printf("%d \t",i);
     sum=0;
    }   

  return 0;
}