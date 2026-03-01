#include <stdio.h>
#include <stdlib.h>
// Edge structure
Struct Edge {
Int src, dest, weight;
};
// Subset structure for Union-Find
Struct Subset {
Int parent;
Int rank;
};
// Function to create a new subset
Struct Subset* newSubset(int parent) {
Struct Subset* subset = (struct Subset*) malloc(sizeof(struct Subset));
Subset->parent = parent;
Subset->rank = 0;
Return subset;
}
// Function to find the subset of an element
Int find(struct Subset subsets[], int i) {
If (subsets[i].parent != i)
Subsets[i].parent = find(subsets, subsets[i].parent);
Return subsets[i].parent;
}
// Function to merge two subsets
Void merge(struct Subset subsets[], int x, int y) {
Int rootX = find(subsets, x);
Int rootY = find(subsets, y);
If (subsets[rootX].rank < subsets[rootY].rank)
Subsets[rootX].parent = rootY;
Else if (subsets[rootX].rank > subsets[rootY].rank)
Subsets[rootY].parent = rootX;
Else {
Subsets[rootY].parent = rootX;
Subsets[rootX].rank++;
}
}
// Function to sort edges by weight in ascending order
Int compare(const void* a, const void* b) {
Struct Edge* edgeA = (struct Edge*) a;
Struct Edge* edgeB = (struct Edge*) b;
Return edgeA->weight – edgeB->weight;
}
// Function to find the minimum spanning tree using Kruskal’s algorithm
Void kruskal(struct Edge edges[], int n, int m) {
Struct Subset* subsets = (struct Subset*) malloc(n * sizeof(struct Subset));
Int resultIndex = 0;
Struct Edge result[n];
For (int i = 0; i < n; i++)
Subsets[i] = *newSubset(i);
Qsort(edges, m, sizeof(edges[0]), compare);
For (int i = 0; i < m && resultIndex < n – 1; i++) {
Int x = find(subsets, edges[i].src);
Int y = find(subsets, edges[i].dest);
If (x != y) {
Result[resultIndex++] = edges[i];
Merge(subsets, x, y);
}
}
Printf(“Minimum Spanning Tree:\n”);
For (int i = 0; i < resultIndex; i++)
Printf(“%d -- %d == %d\n”, result[i].src, result[i].dest, result[i].weight);
}
// Driver program
Int main() {
Int n, m;
Printf(“Enter the number of vertices and edges: “);
Scanf(“%d%d”, &n, &m);
Struct Edge edges[m];
Printf(“Enter the edges and their weights:\n”);
For (int i = 0; i < m; i++)
Scanf(“%d%d%d”, &edges[i].src, &edges[i].dest, &edges[i].weight);
Kruskal(edges, n, m);
Return 0;
}


