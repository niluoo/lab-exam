#include <stdio.h>

int queue[100];
int front = 0, rear = 0;

void enqueue(int value) {
  queue[rear] = value;
  rear++;
}

void dequeue() {
  queue[front] = 0;
  front++;
}

int main() {
  printf("Enter number of vertices: ");
  int n;
  scanf("%d", &n);
  int visited[n];
  for(int i = 0; i < n; ++i) {
    visited[i] = 0;
  }

  int  graph[n][n];
  printf("Enter adjacency matrix: \n");
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      scanf("%d", &graph[i][j]);
    }
  }

  printf("BFS traversal: ");

  enqueue(1);
  visited[0] = 1;

  while(front != rear) {
    int cur = queue[front];
    printf("%d ", current);
    dequeue();
    for(int i = 0; i < n; ++i) {
      if(graph[cur-1][i] && !visited[i]) {
        visited[i] = 1;
        enqueue(i + 1);
      }
    }
  }
  
  return 0;
}
