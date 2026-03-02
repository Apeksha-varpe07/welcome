#include <stdio.h>
#include <stdlib.h>

#define SIZE 10 // size of hash table array

// hash table element structure
struct element {
    int key;
    int value;
};

// hash table array
struct element hashTable[SIZE];

// hash function
int hash(int key) {
    return key % SIZE;
}

// insert function
void insert() {
    int key, value;
    printf("Enter key and value to insert: ");
    scanf("%d %d", &key, &value);
    int index = hash(key);
    int i = 1; // quadratic probing counter
    while (hashTable[index].key != -1) {
        index = (index + i * i) % SIZE;
        i++;
    }
    hashTable[index].key = key;
    hashTable[index].value = value;
    printf("Element inserted successfully!\n");
}

// search function
void search() {
    int key;
    printf("Enter key to search: ");
    scanf("%d", &key);
    int index = hash(key);
    int i = 1; // quadratic probing counter
    while (hashTable[index].key != -1 && hashTable[index].key != key) {
        index = (index + i * i) % SIZE;
        i++;
    }
    if (hashTable[index].key == key) {
        printf("Value found: %d\n", hashTable[index].value);
    } else {
        printf("Value not found!\n");
    }
}

// delete function
void delete() {
    int key;
    printf("Enter key to delete: ");
    scanf("%d", &key);
    int index = hash(key);
    int i = 1; // quadratic probing counter
    while (hashTable[index].key != -1 && hashTable[index].key != key) {
        index = (index + i * i) % SIZE;
        i++;
    }
    if (hashTable[index].key == key) {
        hashTable[index].key = -1;
        hashTable[index].value = -1;
        printf("Element deleted successfully!\n");
    } else {
        printf("Element not found!\n");
    }
}

// display function
void display() {
    printf("Hash table:\n");
    printf("Index\tKey\tValue\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d\t%d\t%d\n", i, hashTable[i].key, hashTable[i].value);
    }
}

// main function
int main() {
    // initialize hash table with -1
    for (int i = 0; i < SIZE; i++) {
        hashTable[i].key = -1;
        hashTable[i].value = -1;
    }
    int choice;
    do {
        printf("\nHash Table Operations:\n");
        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                search();
                break;
            case 3:
                delete();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (choice != 5);
return 0;
}

