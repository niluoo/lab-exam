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

int main() {
  
}
