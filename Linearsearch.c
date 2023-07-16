#include<stdio.h>

void linser(int a[],int n){
  int flag = 0, search = 0;
  printf("enter the search element");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
    if(a[i]==search)
    printf("%d is found in the location %d",search ,i+1);
    flag=0;
  }
  if(flag==0)
  printf("\n The search element is not found ");

}
   int main()
   {
     int n,i,opt,a[50];
     printf("\n choose your option");
     printf("\n 1.Enter array element");
     printf("\n 2.Search array element");
     printf("\n 3.exit the program");
  do {
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:printf("\n Enter the size of the array");
             scanf("%d",&n);
             printf("\n Enter array elements");
             for(int i=0;i<n;i++)
             scanf("%d",&a[i]);
             printf("\nEnd");

      case 2: linser(a,n);
              break;

      case 3: exit(0);

    }

  } while(opt!=3);



   }
