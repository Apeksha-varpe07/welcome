#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

void insert(struct Node** root, int data);
int compare_trees(struct Node* tree1, struct Node* tree2);
void print_tree(struct Node* root);

int main() {
    struct Node* tree1 = NULL;
    struct Node* tree2 = NULL;
    int data, result;
    int n, i;
    
    printf("Enter the number of nodes for tree1: ");
    scanf("%d", &n);
    printf("Enter the data for tree1:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        insert(&tree1, data);
    }
    
    printf("Enter the number of nodes for tree2: ");
    scanf("%d", &n);
    printf("Enter the data for tree2:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        insert(&tree2, data);
    }
    
    result = compare_trees(tree1, tree2);
    
    printf("\nData for tree1: ");
    printf("\n");
    printf("---------------\n");
    printf("   ");
    print_tree(tree1);
    printf("\n\nData for tree2: ");
    printf("\n");
    printf("---------------\n");
    printf("   ");
    print_tree(tree2);
    printf("\n\nResult: ");
    if (result) {
        printf("The two trees are equal.\n");
    } else {
        printf("The two trees are not equal.\n");
    }
    
    return 0;
}


void insert(struct Node** root, int data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    
    if (*root == NULL) {
        *root = new_node;
        return;
    }
    
    if (data < (*root)->data) {
        insert(&((*root)->left), data);
    } else {
        insert(&((*root)->right), data);
    }
}

int compare_trees(struct Node* tree1, struct Node* tree2) {
    if (tree1 == NULL && tree2 == NULL) {
        return 1;
    }
    
    if (tree1 != NULL && tree2 != NULL) {
        if (tree1->data == tree2->data &&
            compare_trees(tree1->left, tree2->left) &&
            compare_trees(tree1->right, tree2->right)) {
            return 1;
        } else {
            return 0;
        }
    }
    
    return 0;
}

// Print the data of a binary search tree in order
void print_tree(struct Node* root) {
    if (root == NULL) {
        return;
    }
    
    print_tree(root->left);
    printf("%d ", root->data);
    print_tree(root->right);
}

