/*Read a Natural Number and check whether the number is Armstrong or not.
  Name: Emil Saj Abraham
  Class: A.I
  Roll no: 28
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a, i,d,sum=0,p,n=0,temp=0;
    printf("Enter an integer \n");
    scanf("%d",&a);
    temp=a;
    while(temp>0)
    {
        n++;
        temp=temp/10;
    }
    temp=a;
    while(temp>0)
    {
        p=1;
        d=temp%10;
          for(i=0;i<n;i++)
          p*=d;
        sum+=p;temp=temp/10;

    }
    if (sum==a)
    printf("%d is an Armstrong no.\n",a);
    else
    printf("%d is not an Armstrong no.\n",a);
    return 0;
}
