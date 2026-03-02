#include <stdio.h>
#include <stdlib.h>

// Define the size of the hash table
#define TABLE_SIZE 10

// Define the structure for the hash table
struct node {
    int data;
    struct node *next;
};

// Define the hash table
struct node *hash_table[TABLE_SIZE] = {NULL};

// Define the hash functions
int division_hash(int key) {
    return key % TABLE_SIZE;
}

int mid_square_hash(int key) {
    int square = key * key;
    int digits = 0;
    while (square) {
        digits++;
        square /= 10;
    }
    square = key * key;
    int middle = (digits / 2) + (digits % 2);
    for (int i = 0; i < middle - 1; i++) {
        square /= 10;
    }
    int hash_value = square % TABLE_SIZE;
    return hash_value;
}

int digit_folding_hash(int key) {
    int hash_value = 0;
    while (key) {
        hash_value += key % 100;
        key /= 100;
    }
    hash_value %= TABLE_SIZE;
    return hash_value;
}

// Define a function to insert data into the hash table
void insert(int data, int hash_function(int)) {
    int index = hash_function(data);
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    if (hash_table[index] == NULL) {
        hash_table[index] = new_node;
    } else {
        struct node *current_node = hash_table[index];
        while (current_node->next != NULL) {
            current_node = current_node->next;
        }
        current_node->next = new_node;
    }
}

// Define a function to display the hash table
void display() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("%d: ", i);
        if (hash_table[i] != NULL) {
            struct node *current_node = hash_table[i];
            while (current_node != NULL) {
                printf("%d -> ", current_node->data);
                current_node = current_node->next;
            }
        }
        printf("NULL\n");
    }
}

int main() {
    int n, data;
    printf("Enter the number of values to be inserted: ");
    scanf("%d", &n);
    printf("Enter %d values:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insert(data, division_hash);
    }
    printf("Hash table using Division Method:\n");
    display();
    for (int i = 0; i < TABLE_SIZE; i++) {
        hash_table[i] = NULL;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insert(data, mid_square_hash);
    }
    printf("Hash table using Mid Square Method:\n");
    display();
    for (int i = 0; i < TABLE_SIZE; i++) {
        hash_table[i] = NULL;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insert(data, digit_folding_hash);
    }
    printf("Hash table using Digit Folding Method:\n");
    display();
    return 0;
}

