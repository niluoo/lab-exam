// Infix to Postfix
#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x) {
  top++;
  stack[top] = x;
}

char pop() {
  return stack[top];
  top--;
}

int prty(char x) {
  if(x == '(') {
    return 0;
  }
  if(x == '+' || x == '-') {
    return 1;
  }
  if(x == '*' || x == '/') {
    return 2;
  }
  if(x == '^') {
    return 3;
  }
  return 0;
}

int main() {
  char infix[100];
  printf("Enter Infix expression: ");
  scanf("%s", infix);

  char *c;
  c = infix;

  while(*c != '\0') {
    if(isalnum(*c)) {
      printf("%c", *c);
    }
    else if(*c == '(') {
      push(*c);
    }
    else if(*c == ')') {
      char x;
      while((x = pop()) != '(') {
        printf("%c", x);
      }
    }
    else {
      while(prty(stack[top]) >= prty(*c)) {
        printf("%c", pop());
        push(*c);
      }
    }
    c++;
  }

  while(top != -1) {
    printf("%c", pop());
  }
  
  return 0;
}
