#include <stdio.h>

int stack[100];

int top = -1;

void push() {
  if(top == n-1) {
    puts("");
    puts("STACK OVERFLOW");
    puts("");
  }
  else {
    printf("Enter a value: ");
    int value;
    scanf("%d", &value);
    top++;
    stack[top] = value;
    puts("");
    printf("%d pushed successfully", value);
    put("");
  }
}

void pop() {
  if(top == -1) {
    puts("");
    puts("STACK UNDERFLOW");
    puts("");
  }
  else {
    puts("");
    printf("Popped element: %d", stack[top]);
    puts("");
    top--;
  }
}

void display() {
  if(top != -1) {
    puts("");
    printf("The elements in stack: ");
    for(int i = top; i >= 0; --i) {
      printf("%d ", stack[i]);
    }
    puts("");
  }
  else {
    puts("");
    puts("STACK EMPTY");
    puts("");
  }
}

int main() {
  printf("Enter size of stack: ");
  int n;
  scanf("%d", &n);

  puts("");
  puts("-- STACK OPERATIONS --");
  puts("1. PUSH");
  puts("2. POP");
  puts("3. DISPLAY");
  puts("4. EXIT");
  puts("");

  printf("Enter a choice: ");
  int choice;
  do {
    scanf("%d", &choice");
    switch(choice) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        puts("");
        puts("-- EXITED --");
        puts("");
        break;
      default:
        puts("");
        puts("Enter a valid choice!");
        puts("");
    }
    if(choice != 4) {
      printf("Enter next choice: ");
    }
  } while(choice != 4);
  
  return 0;
}
