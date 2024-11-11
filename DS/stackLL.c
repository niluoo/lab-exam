#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *link;
};

struct Node *head, *new_node, *ptr, *top;

void create_node() {
  new_node = (struct Node*) malloc(sizeof(struct Node));
  new_node->link = NULL;
}

void push() {
  create_node();
  printf("Enter item: ");
  int item;
  scanf("%d", &item);
  new_node->data = item;
  new_node->link = top;
  top = new_node;
  head->link = top;
}

void pop() {
  if(top == NULL) {
    puts("");
    puts("STACK EMPTY");
    puts("");
  }
  else {
    ptr = top->link;
    int item = top->data;
    printf("%d deleted from stack\n", item);
    free(top);
    head->link = ptr;
    top = ptr;
  }
}

void status() {
  if(top == NULL) {
    puts("");
    puts("-- STACK STATUS --");
    puts("");
    puts("Stack Empty");
    puts(""):
  }
  else {
    puts("");
    puts("-- STACK STATUS --");
    puts("");
    printf("Item on top of stack: %d\n", top->data);
    int cnt = 0;
    ptr = head->link;
    while(ptr != NULL) {
      cnt++;
      ptr = ptr->link;
    }
    printf("Stack contains %d items\n", cnt);
    puts("");
  }
}

void display() {
  if(top == NULL) {
    puts("");
    puts("STACK EMPTY");
    puts("");
  }
  else {
    printf("Stack: ");
    ptr = top;
    printf("->");
    while(ptr->link != NULL) {
      printf("%d-> ", ptr->data);
      ptr = ptr->link;
    }
    printf("%d\n", ptr->data);
  }
}

int main() {
  head = (struct Node*) malloc(sizeof(struct Node));
  head->link = NULL;
  top = NULL;
  
  puts("");
  puts("-- STACK OPERATIONS --");
  puts("");
  puts("1. PUSH");
  puts("2. POP");
  puts("3. STATUS");
  puts("4. DISPLAY");
  puts("5. EXIT");
  puts("");

  int choice;
  printf("Enter a choice");
  do {
   swith(choice) {
     case 1:
       push();
       break;
     case 2:
       pop();
       break;
     case 3:
       status();
       break;
     case 4:
       display();
       break;
     case 5:
       puts("");
       puts("-- EXITED --");
       puts("");
       exit(0);
     default:
       puts("");
       puts("Invalid choice!");
       puts("");
   }
  } while(choice != 5);
}
