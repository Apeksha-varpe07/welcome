#include <stdio.h>
#define MAX_NODES 1000

int n; // number of nodes
int adj[MAX_NODES][MAX_NODES]; // adjacency matrix
int indegree[MAX_NODES]; // array to store indegree of nodes

void topological_sort() {
    int i, j, k;
    int visited[MAX_NODES] = {0}; // array to mark visited nodes
    int stack[MAX_NODES]; // stack to store nodes with zero indegree
    int top = -1; // top of stack
    
    // push all nodes with zero indegree onto stack
    for (i = 0; i < n; i++) {
        if (indegree[i] == 0) {
            stack[++top] = i;
        }
    }
    
    while (top != -1) {
        // pop a node from stack and print it
        k = stack[top--];
        printf("%d ", k);
        
        // mark node as visited
        visited[k] = 1;
        
        // update indegrees of adjacent nodes
        for (i = 0; i < n; i++) {
            if (adj[k][i] == 1) {
                indegree[i]--;
                // push node onto stack if its indegree becomes zero
                if (indegree[i] == 0 && visited[i] == 0) {
                    stack[++top] = i;
                }
            }
        }
    }
}

int main() {
    int i, j;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
            if (adj[i][j] == 1) {
                indegree[j]++;
            }
        }
    }
    printf("Topological sort: ");
    topological_sort();
    printf("\n");
    return 0;
}
