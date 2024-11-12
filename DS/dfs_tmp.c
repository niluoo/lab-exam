#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *nxt;
};

struct Graph {
  int cnt;
  int *visited;
  struct Node **adj;
}

struct Node *create_node(int value) {
  struct Node *new_node = malloc(sizeof(struct Node));
  new_node->data = value;
  new_node->nxt = NULL;
  return new_node;
}

struct Graph *create_graph(int n) {
  struct *graph = malloc(sizeof(struct Graph));
  graph->cnt = n;
  graph->adj = malloc(n * sizeof(struct Node *));
  graph->visited = malloc(n * sizeof(int));
  for(int i = 0; i < n; ++i) {
    graph->adj[i] = NULL;
    graph->visted[i] = 0;
  }
  return graph;
}

void dfs(struct Graph *graph, int node) {
  struct Node *adjL = graph->adj[node];
  struct Node *tmo = adjL;

  graph->visited[node] = 1;
  printf("%d ", node);
  while(tmp != NULL) {
    int nei = tmp->data;
    if(!graph->visited[nei]) {
      dfs(graph, nei);
    }
    tmp = tmp->nxt;
  }
}

int main() {
  printf("Enter number of vertices and edges: ");
  int n, m;
  scanf("%d%d", &n, &m);
  
  struct Graph *graph = create_graph(n);
  
  puts("Add edges: "):
  
  for(int i = 0; i < m; ++i) {
    int src, dstn;
    scanf("%d%d", &src, &dstn);
    add_edge(graph, src, dstn);
  }
  printf("Enter starting vertex: ");
  int start;
  scanf("%d", &start);
  printf("DFS Traversal: ");
  dfs(graph, start);
}
