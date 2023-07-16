/* program to do stack operations*/

#include<stdio.h>
#include<conio.h>
#define size 5

int top=-1, arr[size];

void push();
void pop();
void show();

int main()
{
    int choice=0;
    printf("\n\t\t\tOperations performed by Stack\n "
          "\n\t\t\t 1. Push"
          "\n\t\t\t 2. Pop"
          "\n\t\t\t 3. Show the stack contents "
          "\n\t\t\t 4. Exit ");
printf("\n Enter your choice: ");
         scanf("%d",&choice); 

    
    do 
    {    

        switch (choice)
        {
            case 1: push();
                   break;

            case 2: pop();
                   break;

            case 3: show();
                   break;


            default:printf("\nInvalid choice");                
        }
     printf("\n Enter your choice from above: ");
        scanf("%d",&choice);
       
    }while (choice!=4); 
    if (choice==4)
    {   printf("\n Exit complete");
        exit(0);
    }    
}


  void push()
  {
      int x;
      if(top==size-1)
      {
          printf("\n Stack overflow");
      }
      else 
      {
          printf("\n Enter element to insert to stack :");
          scanf("%d",&x);
          top=top+1;
          arr[top]=x;
           printf("\n Pushed  Element:%d \n", arr[top]);
      }
  }
    void pop()
    { 
       if(top==-1)
       {
           printf("\n Underflow");
       }
       else
       {
           printf("\n Popped Element:%d \n", arr[top]);
           top=top-1;
       }

    } 

   void show()
   {
       if(top==-1)
       {
           printf("\n Underflow");
       }
       else
      {
          printf("\n Elements present in the stack :\n");
          for(int i=top;i>=0;--i)
          printf("\n\t\t%d",arr[i]);
      }

   }