#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *left;
  struct Node *right;
};

struct Node* new_node(int value) {
  struct Node *tmp;
  tmp = malloc(sizeof(struct Node));
  tmp->data = value;
}

struct Node* insert(struct Node *root, int key) {
  if(root == NULL) {
    return new_node(key);
  }
  else if(key > root->data) {

  }
  else {

  }
  printf("%d inserted\n", key);
}

int main() {
  struct Node *root;
  prinf("Enter number of keys: ");
  int n;
  scanf("%d", &n);
  printf("Enter the keys: ");
  for(int i = 0; i < n; ++i) {
    int key;
    scanf("%d", &key);
    if(i == 0) {
      root = new_node(key);
    }
    else {
      insert(root, key);
    }
  }
  
  puts("");
  puts("-- Binary Search Tree --");
  puts("");
  puts("1. INSERT");
  puts("2. DELETE");
  puts("3. SEARCH");

  puts("4. INORDER");
  puts("5. PREORDER");
  puts("6. POSTORDER");

  puts("7. MINIMUM ELEMENT");
  puts("8. MAXIMUM ELEMENT");
  puts("9. EXIT");

  puts("");
  printf("Enter a choice: ");
  while(1) {
    int choice;
    scanf("%d", &choice");
    switch(choice) {
      int key;
      case 1:
        prinf("Enter key: ");
        scanf("%d", &key);
        insert(root, key);
        break;
      case 2:
        remove();
        break;
      case 3:
        search();
        break;
      case 4:
        inorder(root);
        break;
      case 5:
        preorder(root);
        break;
      case 6:
        postorder(root);
        break;
      case 7:
        find_min();
        break;
      case 8:
        find_max();
        break;
      case 9:
        puts("");
        puts("-- EXITED --");
        puts("");
        exit(0);
      default:
        puts("Enter a valid choice!");
    }
    printf("Enter next choice: ");
  }
}
