#include <stdio.h>
#include <stdlib.h>

#define nax 10

int cq[nax];
int front = -1, rear = -1;



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
