#include <stdio.h>

struct Poly {
  int deg;
  float coeff[10];
}

int main() {
  struct Poly p1, p2, sum;
  puts("-- Polynomial 1 --");
  printf("Enter the highest degree: ");
  scanf("%d", &p1.deg);
  for(int i = deg; i >= 0; --i) {
    printf("Enter the coeff of x^%d: ", deg);
    scanf("%d", &p1.coeff[i]);
  }

  puts("-- Polynomial 2 --");
  printf("Enter the highest degree: ");
  scanf("%d", &p2.deg);
  for(int i = deg; i >= 0; --i) {
    printf("Enter the coeff of x^%d: ", deg);
    scanf("%d", &p2.coeff[i]);
  }

  int highest;
  if(p1.deg > p2.deg) {
    highest = p1.deg;
  }
  else {
    highest = p2.deg;
  }

  for(int k = highest; k >= 0; --k) {
    sum.coeff[k] = p1.coeff[k] + p2.coeff[k];
  }

  for(int k = highest; k >= 0; --k) {
    printf("%fx^%d", sum.coeff[k], k);
    if(k != 0) {
      printf("+");
    }
  }
    
  return 0;
}
