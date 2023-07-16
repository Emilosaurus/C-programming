/*Input & Print elements of an array using pointers
 Name : EMIL SAJ ABRAHAM
  Class : A.I.
  Roll no : 28
*/
#include <stdio.h>
#include <conio.h>
int main(){
    int arr[100];
    int n, i;
    int * ptr = arr;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array:\n");
    for (i = 0;  i < n;  i++)
    {
        scanf("%d", (ptr + i)); 
    }
    printf("Array elements: \n");
    for (i = 0;  i < n;  i++)
    {
        printf("%d\n", *(ptr + i));
    }
    return 0;
  }
