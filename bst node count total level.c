#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createNode(int val) {
    struct TreeNode* node = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode* insert(struct TreeNode* node, int val) {
    if (node == NULL) {
        return createNode(val);
    }
    if (val < node->val) {
        node->left = insert(node->left, val);
    }
    else {
        node->right = insert(node->right, val);
    }
    return node;
}

void inorder(struct TreeNode* node) {
    if (node == NULL) {
        return;
    }
    inorder(node->left);
    printf("%d ", node->val);
    inorder(node->right);
}

void destroy(struct TreeNode* node) {
    if (node) {
        destroy(node->left);
        destroy(node->right);
        free(node);
    }
}

int getHeight(struct TreeNode* node) {
    if (node == NULL) {
        return 0;
    }
    int leftHeight = getHeight(node->left);
    int rightHeight = getHeight(node->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

void printNodesAtLevel(struct TreeNode* node, int level, int *count) {
    if (node == NULL) {
        return;
    }
    if (level == 1) {
        printf("%d ", node->val);
        (*count)++;
    }
    else if (level > 1) {
        printNodesAtLevel(node->left, level - 1, count);
        printNodesAtLevel(node->right, level - 1, count);
    }
}

void printLevelOrder(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }
    int height = getHeight(root);
    int i, count;
    for (i = 1; i <= height; i++) {
        count = 0;
        printf("Nodes at level %d: ", i);
        printNodesAtLevel(root, i, &count);
        printf("\nCount of nodes at level %d: %d\n", i, count);
    }
    printf("\nTotal levels in the tree: %d\n", height);
}

int main() {
    struct TreeNode* root = NULL;
    int choice, val;
    while(choice!=4) {
        printf("\n1. Insert");
        printf("\n2. Inorder Traversal");
        printf("\n3. Print Nodes at Each Level");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                printf("\nEnter the value to insert: ");
                scanf("%d", &val);
                root = insert(root, val);
                break;
            case 2:
                if (root == NULL) {
                    printf("\nTree is empty");
                    break;
                }
                printf("\nInorder Traversal: ");
                inorder(root);
                break;
            case 3:
                if (root == NULL) {
                    printf("\nTree is empty");
                    break;
                }
                printf("\n");
                printLevelOrder(root);
                break;
            case 4:
                destroy(root);
                printf("\nProgram Terminated");
                break;
            default :
              printf("Invalide choice !!!!");
              break;
        }
    }
}
