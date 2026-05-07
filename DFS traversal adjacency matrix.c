#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

int adjMatrix[MAX_VERTICES][MAX_VERTICES];
int visited[MAX_VERTICES];

void DFS(int vertex, int numVertices) {
    visited[vertex] = 1;
    printf("%d ", vertex+1);
    for(int i = 0; i < numVertices; i++) {
        if(adjMatrix[vertex][i] && !visited[i]) {
            DFS(i, numVertices);
        }
    }
}

int main() {
    int numVertices, numEdges;
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);
    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);
    for(int i = 0; i < numEdges; i++) {
        int u, v;
        printf("Enter edge %d: ", i+1);
        scanf("%d %d", &u, &v);
        if(u < 1 || u > numVertices || v < 1 || v > numVertices) {
            printf("Invalid vertex number\n");
            i--;
            continue;
        }
        adjMatrix[u-1][v-1] = 1;
        adjMatrix[v-1][u-1] = 1;
    }

    printf("\nAdjacency matrix:\n");
    for(int i = 0; i < numVertices; i++) {
        for(int j = 0; j < numVertices; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }

    printf("\nDFS traversal: ");
    for(int i = 0; i < numVertices; i++) {
        visited[i] = 0;
    }
    for(int i = 0; i < numVertices; i++) {
        if(!visited[i]) {
            DFS(i, numVertices);
        }
    }
    printf("\n");

    return 0;
}
