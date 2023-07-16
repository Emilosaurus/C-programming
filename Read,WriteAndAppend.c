/* Create a file and perform the following
i) Write data to the file
ii) Read the data in a given file & display the file content on console
iii) append new data and display on console
  Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
#define DATA_SIZE 1000
int main()
{
    
    char data[DATA_SIZE];
    FILE * fPtr;
    fPtr = fopen("C:/Users/Emil Saj Abraham/Documents/Cpptext.txt", "w");
    if(fPtr == NULL)
    {  
        printf("Unable to create file.\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter contents to store in file : \n");
    fgets(data, DATA_SIZE, stdin);
    fputs(data, fPtr);
    fclose(fPtr);
    printf("File created and saved successfully. :) \n");
//  to read the data 
      char ch;
    fPtr = fopen("C:/Users/Emil Saj Abraham/Documents/Cpptext.txt", "r");
    if(fPtr == NULL){
        printf("Unable to open file.\n");
    }
    printf("\nFile opened successfully. Reading file contents character by character. \n\n");
    do{
        ch = fgetc(fPtr);
        putchar(ch);
    } while(ch != EOF); 
   fclose(fPtr);
 //to apend the data
     char str[80];
     fPtr = fopen("C:/Users/Emil Saj Abraham/Documents/Cpptext.txt", "a");
   printf("\nEnter your message:");
   gets(str);
   fprintf(fPtr, "%s",str);
   printf("/\nYour message is appended in C:/Users/Emil Saj Abraham/Documents/Cpptext.txt file.");
   fclose(fPtr);


    return 0;    
}
