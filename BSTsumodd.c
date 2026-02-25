#include <stdio.h>
#include <stdlib.h>

// Binary Search Tree Node structure
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Binary Search Tree functions
void insert(struct node **root, int data) {
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    if (*root == NULL) {
        *root = newNode;
        return;
    }
    if (data <= (*root)->data) {
        insert(&(*root)->left, data);
    } else {
        insert(&(*root)->right, data);
    }
}

void printTree(struct node *root) {
    if (root == NULL) {
        return;
    }
    printTree(root->left);
    printf("%d ", root->data);
    printTree(root->right);
}

void destroyTree(struct node *root) {
    if (root == NULL) {
        return;
    }
    destroyTree(root->left);
    destroyTree(root->right);
    free(root);
}

// Binary Search Tree function to return sum of all odd numbers
int Sumodd(struct node *root) {
    if (root == NULL) {
        return 0;
    }
    int sum = 0;
    if (root->data % 2 != 0) {
        sum += root->data;
    }
    sum += Sumodd(root->left);
    sum += Sumodd(root->right);
    return sum;
}

// Binary Search Tree function to return sum of all even numbers
int sumeven(struct node *root) {
    if (root == NULL) {
        return 0;
    }
    int sum = 0;
    if (root->data % 2 == 0) {
        sum += root->data;
    }
    sum += sumeven(root->left);
    sum += sumeven(root->right);
    return sum;
}

// Binary Search Tree function to convert given tree into its mirror image
void Mirror(struct node *root) {
    if (root == NULL) {
        return;
    }
    Mirror(root->left);
    Mirror(root->right);
    struct node *temp = root->left;
    root->left = root->right;
    root->right = temp;
}

// Sample main function to test the above functions
int main() {
    struct node *root = NULL;
    insert(&root, 5);
    insert(&root, 3);
    insert(&root, 7);
    insert(&root, 2);
    insert(&root, 4);
    insert(&root, 6);
    insert(&root, 8);
    printf("Original Tree: ");
    printTree(root);
    printf("\nSum of odd numbers: %d\n", Sumodd(root));
    printf("Sum of even numbers: %d\n", sumeven(root));
    Mirror(root);
    printf("Mirror Tree: ");
    printTree(root);
    printf("\nSum of odd numbers: %d\n", Sumodd(root));
    printf("Sum of even numbers: %d\n", sumeven(root));
    destroyTree(root);
    return 0;
}
