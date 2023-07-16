 /*Open a text input file and count number of characters, words and lines in it; and store the results
in an output file.
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <conio.h>
#include <stdio.h>
int main() 
{
    FILE *fp;
    int c=0, w=0, line=1;
    char ch;
    fp=fopen("C:/Users/Emil Saj Abraham/Documents/Paragraph.txt", "r");
    while(feof(fp)==0)
    {
        ch=fgetc(fp);
        c++;
        if(ch==' ')
           w++;
        if(ch=='\n')
           line++;
    }
    fclose(fp);
    printf("\n\nNumber of characters= %d\n", c);
    printf("Number of words= %d\n", w+1);
    printf("Number of lines= %d\n", line);
    return 0;
}
