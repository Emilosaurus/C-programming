/*C program to read an integer value, floating point value and a character
 from the user, store it in the memory and then display it on the screen.
  Name: Emil Saj Abraham
  Class: A.I
  Roll no: 28
*/
#include<stdio.h>
int main()
{
  int a;
  char b;
  float c;
  printf("Enter the values:");
  scanf("%d %c %f",&a,&b,&c);

  printf("entered vales are = %d\t %c\t %f\t",a,b,c);
  return 0;
}
