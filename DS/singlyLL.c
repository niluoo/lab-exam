#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *link;
} *front = NULL;

void insert_begin() {
  struct Node *new_node;
  new_node = (struct Node *) malloc(sizeof(struct Node));
  if(new_node == NULL) {
    puts("Out of memory space!");
  }
  else {
    printf("Enter data to insert: ");
    scanf("%d", &new_node->data);
    new_node->link = NULL;
    if(front == NULL) {
      front = new_node;
    }
    else {
      new_node->link = front;
      front = new_node;
    }
    printf("%d inserted\n", new_node->data);
  }
}

void insert_end() {
  struct Node *new_node, *ptr;
  new_node = (struct Node *) malloc(sizeof(struct Node));
  if(new_node == NULL) {
    puts("Out of memory space!");
  }
  else {
    printf("Enter data to insert: ");
    scanf("%d", &new_node->data);
    new_node->link = NULL;
    if(front == NULL) {
      front = new_node;
    }
    else {
      for(ptr = front; ptr->link != NULL; ptr=ptr->link) {
        // finding last node
      }
      ptr->link = new_node;
    }
  }
}

void insert_pos() {
  struct Node *new_node;
  new_node = (struct Node *) malloc(sizeof(struct Node));
  if(new_node == NULL) {
    puts("Out of memory space");
  }
  else {
    if(front == NULL) {
      puts("Linked-List empty!");
    }
    else {
      printf("Enter a key: ");
      int key;
      scanf("%d", &key);
      struct Node *ptr;
      ptr = front;
      while((ptr->link != NULL) && (ptr->data != key)) {
        ptr = ptr->link;
      }
      if(ptr->data != key) {
        puts("Key not found, insertion not possible!");
      }
      else {
        printf("Enter data to insert: ");
        scanf("%d", &new_node->data);
        printf("%d inserted\n", new_node->data);
        new_node->link = ptr->link;
        ptr->link = new_node;
      }
    }
  }
}

void delete_begin() {
  if(front == NULL) {
    puts("Linked-List empty!");
  }
  else {
    struct Node *ptr;
    ptr = front;
    front = front->link;
    free(ptr);
  }
}

void delete_end() {
  if(front == NULL) {
    puts("Linked-List empty!");
  }
  else {
    struct Node *cur, *prv;
    cur = prv = front;
    while(cur->link != NULL) {
      prv = cur;
      cur = cur->link;
    }
    prv->link = NULL;
    printf("%d deleted\n", cur->data);
    free(cur);
  }
}

void delete_pos() {
  if(front == NULL) {
    puts("Linked-List empty!");
  }
  else {
    printf("Enter key to delete: ");
    int key;
    scanf("%d", &key);
    struct Node *cur, *prv;
    if(front->data == key) {
      cur = front;
      printf("%d deleted\n", cur->data);
      front = front->link;
      free(cur);
    }
    else {
      prv = cur = front;
      while((cur->data != key) && (cur->link != NULL)) {
        prv = cur;
        cur = cur->link;
      }
      if(cur->data != key) {
        puts("Search key not found!");
      }
      else {
        prv->link = cur->link;
        free(cur);
        printf("%d deleted\n", key);
      }
    }
  }
}

void display() {
  struct Node *ptr;
  if(front == NULL) {
    puts("Linked-List empty!");
  }
  else {
    printf("Elements: ");
    for(ptr=front; ptr->link != NULL; ptr=ptr->link) {
      printf("%d ", ptr->data);
    }
    printf("%d\n", ptr->data);
  }
}

void search() {
  struct Node *ptr;
  if(front == NULL) {
    puts("Linked-List empty!");
  }
  else {
    int pos = 1;
    printf("Enter element to be searched: ");
    int key;
    scanf("%d", &key);
    while(ptr->data != key && ptr->link != NULL) {
      ptr = ptr->link;
      pos++;
    }
    if(ptr->data == key) {
      printf("%d found at position %d\n", key, pos);
    }
    else {
      puts("Element not found!");
    }
  }
}

int main() {
  puts("-- MENU --");
  puts("");
  puts("1. Insert at front");
  puts("2. Insert at end");
  puts("3. Insert after a specific node");
  puts("4. Delete from front");
  puts("5. Delete from end");
  puts("6. Delete a specific node");
  puts("7. Display");
  puts("8. Search");
  puts("9. Exit");
  puts("");

  printf("Enter a choice: ");
  while(1) {
    int choice;
    scanf("%d", &choice);
    switch(choice) {
      case 1:
        insert_begin();
        break;
      case 2:
        insert_end();
        break;
      case 3:
        insert_pos();
        break;
      case 4:
        delete_begin();
        break;
      case 5:
        delete_end();
        break;
      case 6:
        delete_pos();
        break;
      case 7:
        display();
        break;
      case 8:
        search();
        break;
      case 9:
        puts("");
        puts("-- EXITED --");
        puts("");
        exit(0);
      default:
        puts("");
        puts("Inavlid choice!");
        puts("");
    }
    printf("Enter next choice: ");
  }

  return 0;
}
