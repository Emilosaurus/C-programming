/* Linked list operations in C
Emil Saj Abraham 
AD S3 no 28
*/
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
  int data;
  struct Node* next;
};

// Insert at the beginning
void insertAtBeginning(struct Node** head_ref, int new_data) {
  // Allocate memory to a node
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

  // insert the data
  new_node->data = new_data;

  new_node->next = (*head_ref);

  // Move head to new node
  (*head_ref) = new_node;
}

// Insert a node after a node
void insertAfter(struct Node* prev_node, int new_data) {
  if (prev_node == NULL) {
  printf("the given previous node cannot be NULL");
  return;
  }

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}

// Insert the the end
void insertAtEnd(struct Node** head_ref, int new_data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *head_ref; /* used in step 5*/

  new_node->data = new_data;
  new_node->next = NULL;

  if (*head_ref == NULL) {
  *head_ref = new_node;
  return;
  }

  while (last->next != NULL) last = last->next;

  last->next = new_node;
  return;
}

// Delete a node
void deleteNode(struct Node** head_ref, int key) {
  struct Node *temp = *head_ref, *prev;

  if (temp != NULL && temp->data == key) {
  *head_ref = temp->next;
  free(temp);
  return;
  }
  // Find the key to be deleted
  while (temp != NULL && temp->data != key) {
  prev = temp;
  temp = temp->next;
  }

  // If the key is not present
  if (temp == NULL) return;

  // Remove the node
  prev->next = temp->next;

  free(temp);
}

// Search a node
int searchNode(struct Node** head_ref, int key) {
  struct Node* current = *head_ref;

  while (current != NULL) {
  if (current->data == key) return 1;
  current = current->next;
  }
  return 0;
}

// Sort the linked list
void sortLinkedList(struct Node** head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  int temp;

  if (head_ref == NULL) {
  return;
  } else {
  while (current != NULL) {
    // index points to the node next to current
    index = current->next;

    while (index != NULL) {
    if (current->data > index->data) {
      temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}

// Print the linked list
void printList(struct Node* node) 
{
  while (node != NULL) {
  printf(" %d ", node->data);
  node = node->next;         
   }
}

// Driver program
int main() {
  struct Node* head = NULL;
   printf("\n\t\t 1. Insert element at end of list"
          "\n\t\t 2. Insert element at beginning of list"
          "\n\t\t 3. Insert element after postion   "
          "\n\t\t 4. Delete Node "
          "\n\t\t 5. Print  list"
          "\n\t\t 6. Sort List "
          "\n\t\t 7. Search Node"
          "\n\t\t 8. Exit "
          "\n \n \t Enter your choice : ");
          int choice,num;
    scanf("%d",&choice);
   while (choice != 8){ 
    switch (choice) 
      {

         case 1:printf("\n Enter the element to add at end : ");
                scanf("%d",&num);
                insertAtEnd(&head, num);
                printf("Element inserted\n ");
                break;
         case 2:printf("\n Enter the element to add at beginning : ");       
                scanf("%d",&num);
                insertAtBeginning(&head, num);
                printf("Element inserted\n ");
                break;
         case 3:printf("\n enter the element to Insert a node after a node : ") ;
                scanf("%d",&num); 
              
                insertAfter(head->next, num);
                printf(" Element inserted\n ");
                break;
         case 4:printf("\n Enter the element to delete : ");
                scanf("%d",&num);
                deleteNode(&head, 3);
                printf("\n deleted an element %d",num);
                break;
         case 5:printf("\n Linked list: ");
                printList(head);
                break;
         case 6:sortLinkedList(&head);
                printf("\nSorted List: ");
                printList(head);
                break;
         case 7:printf("\nEnter the element to Search ");       
                int item_to_find ;
                scanf("%d",&item_to_find);
                if (searchNode(&head, item_to_find))
                  {
                   printf("\n%d is found", item_to_find);
                  } 
                 else
                   {
                    printf("\n%d is not found", item_to_find);
                   }
                 break;   
         case 8: exit(1);

         default: printf("Wrong choice\n ");
                  break;
      }

  
            printf("\nEnter your choice : ");
                  scanf("%d",&choice);
   } 
}
