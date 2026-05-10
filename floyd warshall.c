#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define MAX_NODES 1000

void floydWarshall(int numNodes, int cost[MAX_NODES][MAX_NODES], int distance[MAX_NODES][MAX_NODES]) {
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            distance[i][j] = cost[i][j];
        }                                                                                                                                        }

    for (int k = 0; k < numNodes; k++) {
        for (int i = 0; i < numNodes; i++) {
            for (int j = 0; j < numNodes; j++) {
                if (distance[i][k] != INT_MAX && distance[k][j] != INT_MAX && distance[i][k] + distance[k][j] < distance[i][j])
                    distance[i][j] = distance[i][k] + distance[k][j];
            }
        }
    }
}

int main() {
    int numNodes;
    int cost[MAX_NODES][MAX_NODES];
    int distance[MAX_NODES][MAX_NODES];

    printf("Enter the number of nodes: ");
    scanf("%d", &numNodes);

    printf("Enter the cost adjacency matrix (use 0 for no edge):\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = INT_MAX;
        }
    }

    floydWarshall(numNodes, cost, distance);

    printf("All pairs shortest paths:\n");
    for (int i = 0; i < numNodes; i++) {
        for (int j = 0; j < numNodes; j++) {
            if (distance[i][j] == INT_MAX)
                printf("INF ");
            else
                printf("%d ", distance[i][j]);
        }
        printf("\n");
    }

    return 0;
}
