/*Read a string (word), store it in an array and check whether it is a palindrome word or not.
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include<string.h>
#include<stdio.h>
#include <stdio.h>
#include <string.h>
int main()
 {
    char st[99999];
    int i,l;
    int flag = 0;
    printf("Enter a string: ");
    scanf("%s",st);
    l=strlen(st);

    for(i=0;i<l;i++)
     {
       if(st[i]!=st[l-i-1])
       {
         flag = 1;
            break;
       }
     }

     if(flag)
        printf("%s is not a palindrome",st);
       else
          printf("%s is a palindrome",st);
    return 0;
 }