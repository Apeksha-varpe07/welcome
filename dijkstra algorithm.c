#include <stdio.h>

#define INF 999
#define MAX 10

void dijkstra(int G[MAX][MAX], int n, int start) {
    int cost[MAX][MAX], distance[MAX], visited[MAX];
    int count, mindistance, nextnode, i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(G[i][j] == 0)
                cost[i][j] = INF;
            else
                cost[i][j] = G[i][j];
        }
    }

    for(i = 0; i < n; i++) {
        distance[i] = cost[start][i];
        visited[i] = 0;
    }

    distance[start] = 0;
    visited[start] = 1;
    count = 1;

    while(count < n - 1) {
        mindistance = INF;

        for(i = 0; i < n; i++) {
            if(distance[i] < mindistance && !visited[i]) {
                mindistance = distance[i];
                nextnode = i;
            }
        }

        visited[nextnode] = 1;

        for(i = 0; i < n; i++) {
            if(!visited[i]) {
                if(mindistance + cost[nextnode][i] < distance[i]) {
                    distance[i] = mindistance + cost[nextnode][i];
                }
            }
        }

        count++;
    }

    printf("Shortest Distances:\n");

    for(i = 0; i < n; i++) {
        printf("%d -> %d = %d\n", start, i, distance[i]);
    }
}

int main() {
    int G[MAX][MAX], n, start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    printf("Enter adjacency matrix:\n");

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &G[i][j]);
        }
    }

    printf("Enter source vertex: ");
    scanf("%d", &start);

    dijkstra(G, n, start);

    return 0;
}
