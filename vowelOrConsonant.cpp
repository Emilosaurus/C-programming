/*C program to read a char  and check if it is vowel or consonant.
  Name: Emil Saj Abraham
  Class: A.I
  Roll no: 28
*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter char\n");
    ch= getchar();

    if (ch=='a'||ch=='e'||ch== 'i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("%c is vowel",ch);
    }
 else
    {
     printf("%c is consonant",ch);
    }
    return 0;
} 

