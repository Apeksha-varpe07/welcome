#include <stdio.h>
#include <limits.h>
#define MAX_NODES 100

int n; // number of nodes
int adj[MAX_NODES][MAX_NODES]; // adjacency matrix

void prim_mst() {
    int i, j, k;
    int parent[MAX_NODES]; // array to store parent of each node in MST
    int key[MAX_NODES]; // array to store key values of nodes
    int mst[MAX_NODES]; // array to store nodes in MST
    int min_key, min_index;
    
    // initialize all keys to infinity and all parents to -1
    for (i = 0; i < n; i++) {
        key[i] = INT_MAX;
        parent[i] = -1;
    }
    
    // pick the first node as the root and set its key to 0
    key[0] = 0;
    mst[0] = 1; // mark the first node as part of the MST
    
    for (i = 1; i < n; i++) {
        // find the node with the minimum key value among the nodes not in MST
        min_key = INT_MAX;
        for (j = 0; j < n; j++) {
            if (mst[j] == 0 && key[j] < min_key) {
                min_key = key[j];
                min_index = j;
            }
        }
        
        // add the node to the MST and update its adjacent nodes' keys if necessary
        mst[min_index] = 1;
        for (k = 0; k < n; k++) {
            if (adj[min_index][k] != 0 && mst[k] == 0 && adj[min_index][k] < key[k]) {
                parent[k] = min_index;
                key[k] = adj[min_index][k];
            }
        }
    }
    
    // print the edges of the MST
    printf("Edges in MST:\n");
    for (i = 1; i < n; i++) {
        printf("%d - %d\n", parent[i], i);
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
        }
    }
    prim_mst();
    return 0;
}

