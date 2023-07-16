/*Sample C program to find the roots of quadratic equation using if else statement
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{  

    float a,b,c;
    float det,r1,r2,r3,r4;
    printf("Enter the Axx+ Bx +c ");
      scanf("%f %f %f",&a,&b,&c);
    det = b*b-4*a*c;

    if (det >0)
    {
        r1= ((-b+sqrt(det))/2*a); 
        r2= ((-b+sqrt(det))/2*a);
        Printf("\n Value of root1 = %f and value of root2 = %f", r1,r2 ); 
    } 
   else if( det==0 )
   {
       r1= (-b/(2*a));
       r2= (-b/(2*a));
        Printf("\n Value of root1 = %f and value of root2 = %f",r1,r2 );
   }
   else if (det < 0)
   {
       r1= (-b/2*a); 
       r3= ((sqrt(det))/2*a);
       r2= (-b/2*a);
       r4= ((sqrt(det))/2*a);
        Printf("\n value of root1 = %f + %fi and value of root2 = %f - %fi",r1,r3,r2,r4);
   }
printf("\n hi");
return 0 ;   
     
}