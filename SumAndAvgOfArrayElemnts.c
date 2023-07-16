/*Read n integers, store them in an array and find their sum and average
Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{   
    int a[20],sum=0,i,n;
    float avg=0;
    printf("Enter the no of elements \n");
    scanf("%d",&n);
    printf("Enter the array of elements \n");
    for(i=0;i<n;i++) 
      {
          scanf("%d",&a[i]);
      }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }    
     avg=(float)sum/n;
    printf("The sum = %d\n",sum);
    printf("The average = %f\n",avg);
return 0;
}    