#include<stdio.h>

#define MAX 10

int adj[MAX][MAX], visited[MAX];

void DFS(int vertex, int n) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    for(int i = 0; i < n; i++) {
        if(adj[vertex][i] == 1 && visited[i] == 0)
            DFS(i, n);
    }
}

int main() {
    int n;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }

    printf("DFS Traversal: ");
    DFS(0, n);

    return 0;
}
