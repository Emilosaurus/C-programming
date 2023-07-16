/*Read a Natural Number and check whether the number is prime or not
Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int a,i=2,flag=0;
    printf("enter the no \n");
    scanf("%d",&a);
    while(i<=a/2)
    {
        if(a%i==0)
        {
            flag =1;
            break;
        }
        i++;
    }
    if (flag==1)
    printf("%d is not a prime no.\n",a);
    else
     printf("%d is a prime no.\n",a);
    return 0;
}