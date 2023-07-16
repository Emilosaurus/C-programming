/* Read a string(word),store it in an array and 
obtain its reverse by using a user defined function
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include <string.h>
void rev (char b[100],int);
int main()
{
    char a[100],x,q;
    int z;
    printf("\n Enter the string : ");
    scanf("%s",&a);
    z= strlen(a);
    rev(a,z);
    printf("\n The reversed strting is %s  ",a);
    return 0;
}
  void rev (char a[100],int y)
  {
      int i;
      char temp;
      for (i=0;i<y/2;i++)
      {
          temp=a[i];
          a[i]=a[y-i-1];
          a[y-i-1]=temp;
      }
  }
