#include <stdio.h>

#define MAX 10

int adj[MAX][MAX], visited[MAX];

void DFS(int v, int n) {
    visited[v] = 1;
    printf("%d ", v);

    for(int i = 0; i < n; i++) {
        if(adj[v][i] == 1 && visited[i] == 0)
            DFS(i, n);
    }
}

int main() {
    int n, edges, u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for(int i = 0; i < edges; i++) {
        scanf("%d%d", &u, &v);
        adj[u][v] = adj[v][u] = 1;
    }

    printf("DFS Traversal: ");
    DFS(0, n);

    return 0;
}
