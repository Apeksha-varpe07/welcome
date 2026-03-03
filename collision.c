#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

// Define a structure for a node in the linked list
typedef struct node {
    char* key;
    int value;
    struct node* prev;
    struct node* next;
} node;

// Define a hash table structure
typedef struct hash_table {
    node* table[TABLE_SIZE];
} hash_table;

// Hash function to convert a string key to an index in the table
unsigned int hash(char* key) {
    unsigned int hashval = 0;
    for (int i = 0; i < strlen(key); i++) {
        hashval += key[i] * (i + 1);
    }
    return hashval % TABLE_SIZE;
}

// Insert a key-value pair into the hash table
void insert(hash_table* ht, char* key, int value) {
    // Create a new node for the key-value pair
    node* new_node = malloc(sizeof(node));
    new_node->key = key;
    new_node->value = value;
    new_node->prev = NULL;
    new_node->next = NULL;
    
    // Calculate the hash index for the key
    unsigned int index = hash(key);
    
    // If the index is empty, insert the new node
    if (ht->table[index] == NULL) {
        ht->table[index] = new_node;
    }
    // Otherwise, append the new node to the end of the linked list
    else {
        node* current = ht->table[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
        new_node->prev = current;
    }
}

// Search for a key in the hash table and return its value
int search(hash_table* ht, char* key) {
    // Calculate the hash index for the key
    unsigned int index = hash(key);
    
    // Traverse the linked list at the index and search for the key
    node* current = ht->table[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    
    // If the key is not found, return -1
    return -1;
}

// Delete a key-value pair from the hash table
void delete(hash_table* ht, char* key) {
    // Calculate the hash index for the key
    unsigned int index = hash(key);
    
    // If the index is empty, return
    if (ht->table[index] == NULL) {
        return;
    }
    
    // If the key is at the head of the linked list, delete the head
    if (strcmp(ht->table[index]->key, key) == 0) {
        node* head = ht->table[index];
        ht->table[index] = head->next;
        if (head->next != NULL) {
            head->next->prev = NULL;
        }
        free(head);
        return;
    }
    
    // Traverse the linked list and delete the node with the key
    node* current = ht->table[index];
    while (current != NULL) {
    // the key is found in the linked list
if (strcmp(current->key, key) == 0) {
// If the node to delete is at the end of the linked list
if (current->next == NULL) {
current->prev->next = NULL;
free(current);
return;
}
// If the node to delete is in the middle of the linked list
else {
current->prev->next = current->next;
current->next->prev = current->prev;
free(current);
return;
}
}
current = current->next;
}
}

// Display the contents of the hash table
void display(hash_table* ht) {
// Traverse the hash table and print each linked list
for (int i = 0; i < TABLE_SIZE; i++) {
printf("Index %d:\n", i);
node* current = ht->table[i];
while (current != NULL) {
printf("(%s, %d) ", current->key, current->value);
current = current->next;
}
printf("\n");
}
}

int main() {
// Initialize the hash table
hash_table ht;
for (int i = 0; i < TABLE_SIZE; i++) {
ht.table[i] = NULL;
}
// Menu-driven program to insert, search, delete, and display key-value pairs
int choice, value;
char key[50];
do {
    printf("1. Insert a key-value pair\n");
    printf("2. Search for a key\n");
    printf("3. Delete a key-value pair\n");
    printf("4. Display the hash table\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter the key: ");
            scanf("%s", key);
            printf("Enter the value: ");
            scanf("%d", &value);
            insert(&ht, key, value);
            break;
        case 2:
            printf("Enter the key: ");
            scanf("%s", key);
            value = search(&ht, key);
            if (value == -1) {
                printf("Key not found\n");
            }
            else {
                printf("Value: %d\n", value);
            }
            break;
        case 3:
            printf("Enter the key: ");
            scanf("%s", key);
            delete(&ht, key);
            break;
        case 4:
            display(&ht);
            break;
        case 0:
            printf("Exiting program\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
    printf("\n");
} while (choice != 0);

return 0;
}


