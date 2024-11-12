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
    puts("Out of memory space!");
  }
  else {
    printf("Enter data to insert: ");
    scanf("%d", &new_node->data);
    new_node->link = NULL;
    if(front == NULL) {
      front = new_node;
    }
    else {
      new_node->link = front;
      front = new_node;
    }
    printf("%d inserted\n", new_node->data);
  }
}

void insert_end() {
  struct Node *new_node, *ptr;
  new_node = (struct Node *) malloc(sizeof(struct Node));
  if(new_node == NULL) {
    puts("Out of memory space!");
  }
  else {
    printf("Enter data to insert: ");
    scanf("%d", &new_node->data);
    new_node->link = NULL;
    if(front == NULL) {
      front = new_node;
    }
    else {
      for(ptr = front; ptr->link != NULL; ptr=ptr->link) {
        // finding last node
      }
      ptr->link = new_node;
    }
  }
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
  struct Node *ptr;
  if(front == NULL) {
    puts("Linked-List empty!");
  }
  else {
    printf("Elements: ");
    for(ptr=front; ptr->link != NULL; ptr=ptr->link) {
      printf("%d ", ptr->data);
    }
    printf("%d\n", ptr->data);
  }
}

void search() {
  struct Node *ptr;
  if(front == NULL) {
    puts("Linked-List empty!");
  }
  else {
    int pos = 1;
    printf("Enter element to be searched: ");
    int key;
    scanf("%d", &key);
    while(ptr->data != key && ptr->link != NULL) {
      ptr = ptr->link;
      pos++;
    }
    if(ptr->data == key) {
      printf("%d found at position %d\n", key, pos);
    }
    else {
      puts("Element not found!");
    }
  }
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
