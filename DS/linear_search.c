#include <stdio.h>

int main() {
  printf("Enter number of elements: ");
  int n;
  scanf("%d", &n);

  printf("Enter the elements: ");
  int a[n];
  for(int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }

  printf("Enter the element to be searched: ");
  int key;
  scanf("%d", &key);

  int found = 0; // not found
  int pos;
  for(int i = 0; i < n; ++i) {
    if(a[i] == key) {
      found = 1; // found
      pos = i;
      break;
    }
  }

  if(found) {
    printf("%d found at index: %d\n", key, pos);
  }
  else {
    printf("%d not found!\n", key);
  }
  
  return 0;
}
