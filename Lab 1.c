#include<stdio.h>
int main(){
int array[50], limit, key, result, i, low, high, mid, space = 0, times = 0;
char choice; 
times += 10;
space = 77; 
do{
printf("Enter array limit: ");
scanf("%d", &limit);
times++;
printf("Enter sorted array elements:\n");
for(i=0; i<limit; i++){
    printf("Element %d: ", i+1);
    scanf("%d", &array[i]);
    times += 2;
}
times = times + 1;
printf("Enter search key: ");
scanf("%d", &key);
times += 2;
low = 0, high = limit - 1, mid = (low + high) / 2;
times = times + 3;
while(low <= high){
times ++;
   mid = (low + high) / 2;
   times++;
   if(array[mid] == key){
      printf("Element %d is found at position %d", key, (mid + 1));
      times += 2;
      break;
   }
   if(array[mid] < key){
    low = mid + 1;
    times += 2;
   }
   else{
    high = mid - 1;
    times++;
   }
   mid = (low + high) / 2;
   times++;
}
   if(low > high){
     printf("Element %d is not found on the list\n", key);
times += 2;  
}
printf("\nEnter Your Choice \nFor SEARCHING Type s \nFor EXIT, press any letter\nChoice: ");
scanf(" %c", &choice);
times += 3;
}while(choice == 'S' || choice == 's');
times += 2;
printf("Exited!\nTime complexity is  %d\n", times);
printf("Space complexity is  %d\n", space);
}