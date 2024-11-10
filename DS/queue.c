#include <stdio.h>
#include <stdlib.h>

#define nax 10
int queue[nax];

int front = -1, rear = -1;

void insert() {
  if(rear == nax-1) {
    puts("");
    puts("QUEUE OVERFLOW");
    puts("");
  }
  else {
    if(front == -1) {
      front = 0;
    }
    printf("Element to be inserted: ");
    int item;
    scanf("%d", &item);
    rear++;
    queue[rear] = item;
    puts("");
    printf("%d inserted", item);
    puts("");
  }
}

void remove() {
  if(front == -1) {
    puts("");
    puts("QUEUE UNDERFLOW");
    puts("");
  }
  else {
    printf("Deleted element: %d\n", queue[front]);
    if(front == rear) {
      front = -1;
      rear = -1;
    }
    else {
      front++;
    }
  }
}

void display() {
  if(front == -1) {
    puts("");
    puts("QUEUE EMPTY");
    puts("");
  }
  else {
    printf("Queue elements: ");
    for(int i = front; i < rear; ++i) {
      printf("%d ", queue[i]);
    }
    printf("%d\n", queue[rear]);
  }
}

int main() {
  puts("");
  puts("-- QUEUE OPERATIONS --");
  puts("1. INSERT");
  puts("2. REMOVE);
  puts("3. DISPLAY");
  puts("4. EXIT");
  puts("");

  printf("Enter a choice: ");
  while(1) {
    int choice;
    scanf("%d", &choice);
    switch(choice) {
      case 1:
        insert();
        break;
      case 2:
        remove();
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
        puts("Enter a valid choice!");
        puts("");
    }
    printf("Enter next choice: ");
  }

  return 0;
}
