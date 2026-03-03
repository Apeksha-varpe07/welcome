#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

// Define a structure for a node in the linked list
typedef struct node {
    char* key;
    int value;
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
        free(head);
        return;
    }
    
    // Traverse the linked list and delete the node with the key
    node* current = ht->table[index];
    while (current->next != NULL) {
        if (strcmp(current->next->key, key) == 0) {
            node* temp = current->next;
            current->next = temp->next;
            free(temp);
            return;
        }
        current = current->next;
    }
}

// Display the contents of the hash table
void display(hash_table* ht) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        node* current = ht->table[i];
        while (current != NULL) {
        printf("%s: %d\n", current->key, current->value);
        current = current->next;
    }
}
}
// Menu-driven program to perform operations on the hash table
int main() {
// Initialize the hash table
hash_table ht;
for (int i = 0; i < TABLE_SIZE; i++) {
ht.table[i] = NULL;
}
// Display the menu options
int choice;
while(choice!=5) {
    printf("Menu:\n");
    printf("1. Insert a key-value pair\n");
    printf("2. Search for a key\n");
    printf("3. Delete a key-value pair\n");
    printf("4. Display the hash table\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    // Perform the selected operation
    switch (choice) {
        case 1:
            // Prompt the user for the key-value pair to insert
            char key[50];
            int value;
            printf("Enter the key: ");
            scanf("%s", key);
            printf("Enter the value: ");
            scanf("%d", &value);
            
            // Insert the key-value pair into the hash table
            insert(&ht, key, value);
            printf("Key-value pair inserted successfully.\n");
            break;
            
        case 2:
            // Prompt the user for the key to search for
            char search_key[50];
            printf("Enter the key to search for: ");
            scanf("%s", search_key);
            
            // Search for the key in the hash table and display its value
            int result = search(&ht, search_key);
            if (result == -1) {
                printf("Key not found in the hash table.\n");
            } else {
                printf("Value for key %s: %d\n", search_key, result);
            }
            break;
            
        case 3:
            // Prompt the user for the key to delete
            char delete_key[50];
            printf("Enter the key to delete: ");
            scanf("%s", delete_key);
            
            // Delete the key-value pair from the hash table
            delete(&ht, delete_key);
            printf("Key-value pair deleted successfully.\n");
            break;
            
        case 4:
            // Display the contents of the hash table
            display(&ht);
            break;
            
        case 5:
            // Exit the program
            printf("Exiting...\n");
            break;
            
        default:
            // Invalid menu choice
            printf("Invalid choice. Please try again.\n");
            break;
         }
    }
}

M
