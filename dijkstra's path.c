#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_NODES 1000

void dijkstra(int numNodes, int source, int cost[MAX_NODES][MAX_NODES], int distance[MAX_NODES], int visited[MAX_NODES]) {
    for (int i = 0; i < numNodes; i++) {
        distance[i] = INT_MAX;
        visited[i] = 0;
    }
    distance[source] = 0;

    for (int i = 0; i < numNodes - 1; i++) {
        int minDistance = INT_MAX;
        int minVertex;

        for (int j = 0; j < numNodes; j++) {
            if (!visited[j] && distance[j] <= minDistance) {
                minDistance = distance[j];
                minVertex = j;
            }
        }

        visited[minVertex] = 1;

        for (int k = 0; k < numNodes; k++) {
            if (!visited[k] && cost[minVertex][k] && distance[minVertex] != INT_MAX && distance[minVertex] + cost[minVertex][k] < distance[k])
                distance[k] = distance[minVertex] + cost[minVertex][k];
        }
    }
}

int main() {
    int numNodes, source;
    int cost[MAX_NODES][MAX_NODES];
    int distance[MAX_NODES];
    int visited[MAX_NODES];

    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    printf("Enter the cost adjacency matrix (use 0 for no edge):\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            scanf("%d", &cost[i][j]);
        }
    }

    printf("Enter the source vertex: ");
    scanf("%d", &source);

    dijkstra(numNodes, source, cost, distance, visited);

    printf("Shortest distances from source vertex %d:\n", source);
    for (int i = 0; i < numNodes; i++) {
        printf("%d -> %d = %d\n", source, i, distance[i]);
    }

    return 0;
}
