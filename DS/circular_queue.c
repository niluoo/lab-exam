#include <stdio.h>
#include <stdlib.h>

#define nax 10

int cq[nax];
int front = -1, rear = -1;

void enQueue() {
  printf("Enter value to insert: ");
  int value;
  scanf("%d", &value);
  if(front == -1 && rear == -1) {
    front = rear = 0;
    cq[rear] = value;
    printf("%d inserted\n", value);
  }
  else if((rear + 1) % nax == front) {
    puts("Queue full, insertion not possible!");
  }
  else {
    rear = (rear + 1) % nax;
    cq[rear] = value;
    printf("%d inserted\n", value);
  }
}

void deQueue() {
  if(front == -1 && rear == -1) {
    puts("Queue empty, deletion not possible");
  }
  else if(front == rear) {
    printf("%d deleted\n", cq[front]);
    front = -1;
    rear = -1;
  }
  else {
    printf("%d deleted\n", cq[front]);
    front = (front + 1) % nax;
  }
}

void display() {
  if(front == -1 && rear == -1) {
    puts("QUEUE EMPTY");
  }
  else {
    printf("Queue: ");
    for(int i = front; i != rear; i = (i+1) % nax) {
      printf("%d ", cq[i]);
    }
    printf("%d\n", cq[rear]);
  }
}

int main() {
  puts("-- CIRCULAR QUEUE --");
  puts("");
  puts("1. INSERT");
  puts("2. DELETE");
  puts("3. DISPLAY");
  puts("4. EXIT");
  puts("");

  printf("Enter a choice: ");
  while(1) {
    int choice;
    scanf("%d", &choice);
    switch(choice) {
      case 1:
        enQueue();
        break;
      case 2:
        deQueue();
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
        puts("Enter valid choice!");
    }
    printf("Enter next choice: ");
  }
  
  return 0;
}
