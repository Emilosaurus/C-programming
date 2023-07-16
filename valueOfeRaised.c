/* C program to find the sum of the infinite series e^x=1+x+x^2/2!+x^3/3!.... utpo an accuracy of 0.000001.
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include<stdio.h>
#include<conio.h>
     int main()
    {
      int i,nterms=100;
      float xVal,sum=1,temp=1,tempAns;
       
     printf("Enter the value of x \n");
     scanf("%f",&xVal);
    
      
    
      
      for (i = 1; i <=nterms; i++)
      {
        temp=(temp*xVal)/(float)i;
        sum=sum+temp;
        tempAns=temp;
        if((fabs(sum-tempAns))<=0.0000010)
        {
          break;
        }
      }
      
        printf("The sum after %d iterations is : %f",nterms,sum);

    return 0;
    }   
     
