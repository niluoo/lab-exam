#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *link;
} Node;

Node *front = NULL, *rear = NULL, *ptr;

void insert() {
  ptr = (Node *) malloc(sizeof(Node));
  printf("Enter element: ");
  scanf("%d", &ptr->data);
  ptr->link = NULL;
  if(rear == NULL) {
    front = ptr;
    rear = ptr;
  }
  else {
    rear->link = ptr;
    rear = ptr;
  }
  printf("%d inserted\n", rear->data);
}

void delete() {
  if(front == NULL) {
    puts("");
    puts("QUEUE EMPTY");
    puts("");
  }
  else if(front == rear) {
    printf("%d deleted\n", front->data);
    free(front);
    front = rear = NULL;
  }
  else {
    Node *tmp = front;
    printf("%d deleted\n", front->data);
    front = front->link;
    free(tmp);
  }
}

void display() {
  if(front == NULL) {
    puts("");
    puts("QUEUE EMPTY");
    puts("");
  }
  else {
    printf("Queue: ");
    Node *cur = front;
    while(cur != NULL) {
      printf("%d ", cur->data);
      cur = cur->link;
    }
    puts("");
  }
}

int main() {
  puts("");
  puts("-- QUEUE OPERATIONS --");
  puts("");
  puts("1. INSERT");
  puts("2. DELETE");
  puts("3. DISPLAY");
  puts("4. EXIT");
  puts("");

  printf("Enter a choice: ");
  do {
    int choice;
    scanf("%d", &choice);
    switch(choice) {
      case 1:
        enqueue();
        break;
      case 2:
        dequeue();
        break;
      case 3:
        display();
        break;
      case 4:
        puts("");
        puts("-- EXITED --");
        puts("");
        exit(0);
      default:
        puts("");
        puts("Invalid choice!");
        puts("");
    }
    printf("Enter next choice: ");
  } while(1);
  
  return 0;
}
