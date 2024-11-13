#include <stdio.h>

int main() {
  printf("Enter row & col: ");
  int r, c;
  scanf("%d%d", &r, &c);
  printf("Enter the matrix: \n");
  int m[r][c];
  int cnt = 0;
  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      scanf("%d", &m[i][j]);
      if(m[i][j] != 0) {
        cnt++;
      }
    }
  }

  printf("Number of non-zero elements: %d\n", cnt);
  int sparse[cnt+1][3];

  sparse[0][0] = r;
  sparse[0][1] = c;
  sparse[0][2] = cnt;
  
  int nxt = 1;
  for(int i = 0; i < r; ++i) {
    for(int j = 0; j < c; ++j) {
      if(m[i][j] != 0) {
        sparse[nxt][0] = i;
        sparse[nxt][1] = j;
        sparse[nxt][2] = a[i][j];
        nxt++;
      }
    }
  }
  
  return 0;
}
