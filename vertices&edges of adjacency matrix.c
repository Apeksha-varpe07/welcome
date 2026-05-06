#include <stdio.h>

int main()
{
    int vertices, edges, i, j, vertex1, vertex2;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    int adjacency_matrix[vertices][vertices];
    for(i = 0; i < vertices; i++) {
        for(j = 0; j < vertices; j++) {
            adjacency_matrix[i][j] = 0;
        }
    }

    for(i = 0; i < edges; i++) {
        printf("Enter edge %d: ", i + 1);
        scanf("%d%d", &vertex1, &vertex2);

        if (vertex1 >= vertices || vertex2 >= vertices) {
            printf("Invalid vertex number. Try again.\n");
            i--;
            continue;
        }
        if (vertex1 == vertex2) {
            printf("A vertex cannot be connected to itself. Try again.\n");
            i--;
            continue;
        }

        adjacency_matrix[vertex1][vertex2] = 1;
        adjacency_matrix[vertex2][vertex1] = 1;
    }

    printf("\nAdjacency matrix:\n");
    for(i = 0; i < vertices; i++) {
        for(j = 0; j < vertices; j++) {
            printf("%d ", adjacency_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
