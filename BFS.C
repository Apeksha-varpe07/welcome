#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int adj[MAX][MAX], visited[MAX], queue[MAX];
int front = -1, rear = -1;

void bfs(int v, int n) {
    visited[v] = 1;
    queue[++rear] = v;
    while (front != rear) {
        v = queue[++front];
        printf("%d ", v);
        for (int i = 1; i <= n; i++) {
            if (adj[v][i] && !visited[i]) {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main() {
    int n, e, v1, v2;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the number of edges: ");
    scanf("%d", &e);
    for (int i = 1; i <= e; i++) {
        printf("Enter edge %d: ", i);
        scanf("%d %d", &v1, &v2);
        adj[v1][v2] = 1;
        adj[v2][v1] = 1;
    }
    printf("\nAdjacency matrix:\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
    printf("\nBFS traversal: ");
    bfs(1, n);
    printf("\n");
    return 0;
}

