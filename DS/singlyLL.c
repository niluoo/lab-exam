#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *link;
} *front = NULL;

void insert_begin() {
  struct Node *new_node;
  new_node = (struct Node *) malloc(sizeof(struct Node));
  if(new_node == NULL) {
    puts("Out of memory space");
  }
  else {
    printf("Enter data to insert: ");
    scanf("%d", &new_node->data);
    new_node->link = NULL;
  }
}

void insert_end() {
  
}

void insert_pos() {
  
}

void delete_begin() {
  
}

void delete_end() {
  
}

void delete_pos() {
  
}

void display() {
  
}

void search() {
  
}

int main() {
  puts("-- MENU --");
  puts("");
  puts("1. Insert at front");
  puts("2. Insert at end");
  puts("3. Insert after a specified node");
  puts("4. Delete from front");
  puts("5. Delete from end");
  puts("6. Delete a specific node");
  puts("7. Display");
  puts("8. Search");
  puts("9. Exit");
  puts("");

  printf("Enter a choice: ");
  while(1) {
    int choice;
    scanf("%d", &choice);
    switch(choice) {
      case 1:
        insert_begin();
        break;
      case 2:
        insert_end();
        break;
      case 3:
        insert_pos();
        break;
      case 4:
        delete_begin();
        break;
      case 5:
        delete_end();
        break;
      case 6:
        delete_pos();
        break;
      case 7:
        display();
        break;
      case 8:
        search();
        break;
      case 9:
        puts("");
        puts("-- EXITED --");
        puts("");
        exit(0);
      default:
        puts("");
        puts("Inavlid choice!");
        puts("");
    }
    printf("Enter next choice: ");
  }

  return 0;
}
