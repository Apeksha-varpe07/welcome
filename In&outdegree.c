#include <stdio.h>

#define MAX_VERTICES 100

int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];

void initializeMatrix(int numVertices) {
    int i, j;
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            adjacencyMatrix[i][j] = 0;
        }
    }
}

void addEdge(int start, int end, int numVertices) {
    if (start >= 0 && start < numVertices && end >= 0 && end < numVertices) {
        adjacencyMatrix[start][end] = 1;
    } else {
        printf("Invalid vertex number\n");
    }
}

void printMatrix(int numVertices) {
    int i, j;
    printf("\nAdjacency matrix:\n");
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            printf("%d ", adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

void printIndegree(int numVertices) {
    int i, j, indegree;
    printf("\nIndegree of each vertex:\n");
    for (i = 0; i < numVertices; i++) {
        indegree = 0;
        for (j = 0; j < numVertices; j++) {
            if (adjacencyMatrix[j][i] == 1) {
                indegree++;
            }
        }
        printf("%d: %d\n", i, indegree);
    }
}

void printOutdegree(int numVertices) {
    int i, j, outdegree;
    printf("\nOutdegree of each vertex:\n");
    for (i = 0; i < numVertices; i++) {
        outdegree = 0;
        for (j = 0; j < numVertices; j++) {
            if (adjacencyMatrix[i][j] == 1) {
                outdegree++;
            }
        }
        printf("%d: %d\n", i, outdegree);
    }
}

void printTotalDegree(int numVertices) {
    int i, j, totalDegree;
    printf("\nTotal degree of each vertex:\n");
    for (i = 0; i < numVertices; i++) {
        totalDegree = 0;
        for (j = 0; j < numVertices; j++) {
            if (adjacencyMatrix[i][j] == 1) {
                totalDegree++;
            }
            if (adjacencyMatrix[j][i] == 1) {
                totalDegree++;
            }
        }
        printf("%d: %d\n", i, totalDegree);
    }
}

int main() {
    int numVertices, numEdges, i, start, end;
    printf("Enter the number of vertices: ");
    scanf("%d", &numVertices);
    printf("Enter the number of edges: ");
    scanf("%d", &numEdges);
    initializeMatrix(numVertices);
    for (i = 0; i < numEdges; i++) {
        printf("Enter edge %d: ", i + 1);
        scanf("%d %d", &start, &end);
        addEdge(start - 1, end - 1, numVertices);
    }
    printMatrix(numVertices);
    printIndegree(numVertices);
    printOutdegree(numVertices);
    printTotalDegree(numVertices);
    return 0;
}
