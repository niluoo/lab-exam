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
    root->right = insert(root->right, key);
  }
  else {
    root->left = insert(root->left, key);
  }
  return root;
  printf("%d inserted\n", key);
}

struct Node* find_min(struct Node *root) {
  struct Node *ptr, *parent;
  ptr = root;
  while(ptr != NULL) {
    parent = ptr;
    ptr = ptr->left;
  }
  return parent;
}

struct Node* find_max(struct Node *root) {
  struct Node *ptr, *parent;
  ptr = root;
  while(ptr != NULL) {
    parent = ptr;
    ptr = ptr->right;
  }
  return parent;
}

struct Node* remove(struct Node *root, int key) {
  if(root == NULL) {
    return NULL;
  }
  if(x > root->data) {
    root->right = delete(root->right, key);
  }
  else if(x < root->data) {
    root->left = delete(root->left, key);
  }
  else {
    // leaf node
    if(root->left == NULL && root->right == NULL) {
      free(root);
      return NULL;
    }
    else if(root->left == NULL || root->right == NULL) {
      // either left or right subtree exist
      struct Node* tmp;
      if(root->left == NULL) {
        // right subtree exist
        tmp = root->right;
      }
      else {
        // left
        tmp = root->left;
      }
      free(root);
      return tmp;
    }
    else {
      // both left and right subtree exist
      struct Node *tmp = find_min(root->right_child);
      root->data = tmp->data;
      root->right = delete(root->right, tmp->data);
    }
  }
  return root;
}

int main() {
  struct Node *root, *min, *max;
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
        printf("Enter key to delete: ");
        scanf("%d", &key);
        root = remove(root, key);
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
        min = find_min(root);
        printf("Smallest element in the tree: %d\n", min->data);
        break;
      case 8:
        max = find_max(root);
        printf("Largest element in the tree: %d\n", max->data);
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
