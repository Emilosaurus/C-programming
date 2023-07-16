/*Using structure, read and print data of 
  employees (Name, Employee Id and Salary)
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct Employee
{
int empid;
char name[50];
int salary;
}emp[50];
int main()
{ int n,i;
  printf("\nEnter the number of employees\n"); 
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the employee details\t-%d\n",i+1);
    printf("Employee id:\t");
    scanf("%d",&emp[i].empid);
    getchar();
    printf("Employee name:\t");
    scanf("%[^\n]",emp[i].name);
    printf("Employee salary:\t");
    scanf("%d",&emp[i].salary);
 }
  printf("\n\nEmployee Details\n\n"); 
  
   for(i=0;i<n;i++)
       {
         printf("Employee id \t %d \n",emp[i].empid);
         printf("Employee name \t %s\n" ,emp[i].name);
         printf("Employee salary\t  %d \n\n\n" ,emp[i].salary);
       }
  return 0;     
} 