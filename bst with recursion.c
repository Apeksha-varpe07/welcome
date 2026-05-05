#include<stdio.h>
#include<stdlib.h>

struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* createNode(int val){
    struct TreeNode* node = (struct TreeNode*) malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode* insert(struct TreeNode* node, int val){
    if(node == NULL) return createNode(val);
    if(val < node->val) node->left = insert(node->left, val);
    else node->right = insert(node->right, val);
    return node;
}

void inorder(struct TreeNode* node){
    if(node == NULL) return;
    inorder(node->left);
    printf("%d ", node->val);
    inorder(node->right);
}

struct TreeNode* copyTree(struct TreeNode* node){
    if(node == NULL) return NULL;
    struct TreeNode* newnode = createNode(node->val);
    newnode->left = copyTree(node->left);
    newnode->right = copyTree(node->right);
    return newnode;
}

int compareTrees(struct TreeNode* node1, struct TreeNode* node2){
    if(node1 == NULL && node2 == NULL) return 1;
    if(node1 == NULL || node2 == NULL) return 0;
    if(node1->val != node2->val) return 0;
    return compareTrees(node1->left, node2->left) && compareTrees(node1->right, node2->right);
}

void destroy(struct TreeNode* node){
    if(node){
        destroy(node->left);
        destroy(node->right);
        free(node);
    }
}

int main(){
    struct TreeNode* root = NULL;
    int choice, val;
    do{
        printf("\n1. Insert");
        printf("\n2. Inorder Traversal");
        printf("\n3. Copy Tree");
        printf("\n4. Compare Trees");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("\nEnter the value to insert: ");
                scanf("%d", &val);
                root = insert(root, val);
                break;
            case 2:
                if(root == NULL){
                    printf("\nTree is empty");
                    break;
                }
                printf("\nInorder Traversal: ");
                inorder(root);
                break;
            case 3:
                if(root == NULL){
                    printf("\nTree is empty");
                    break;
                }
                struct TreeNode* copy = copyTree(root);
                printf("\nCopied Tree:");
                inorder(copy);
                destroy(copy);
                break;
            case 4:
                if(root == NULL){
                    printf("\nTree is empty");
                    break;
                }
                struct TreeNode* root2 = NULL;
               printf("\nEnter values for second tree (-1 to stop): ");
                while(1){
                    scanf("%d", &val);
                    printf("read value: %d\n", val); // debug statement
                    if(val == -1) break;
                    root2 = insert(root2, val);
                    printf("inserted node: %d\n", root2->val); // debug statement
                }

                int result = compareTrees(root, root2);
                if(result) printf("\nTrees are equal");
                else printf("\nTrees are not equal");
                destroy(root2);
                break;
            case 5:
                printf("\nExiting program");
                destroy(root);
                exit(0);
            default:
                printf("\nInvalid choice");
        }
    }while(choice != 5);
    return 0;
}
