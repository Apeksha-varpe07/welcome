#include <stdio.h>
#include <stdlib.h>

// Define the size of the hash table
#define TABLE_SIZE 10

// Define the structure for the hash table
struct node {
    int data;
    int status; // 0 for empty, 1 for filled, -1 for deleted
};

// Define the hash table
struct node hash_table[TABLE_SIZE];

// Define the hash function
int hash_function(int key) {
    return key % TABLE_SIZE;
}

// Define a function to insert data into the hash table
void insert(int data) {
    int index = hash_function(data);
    int i = index;
    while (hash_table[i].status == 1) {
        i = (i + 1) % TABLE_SIZE;
        if (i == index) {
            printf("Hash table is full. Cannot insert %d.\n", data);
            return;
        }
    }
    hash_table[i].data = data;
    hash_table[i].status = 1;
    printf("%d has been inserted at index %d.\n", data, i);
}

// Define a function to search for data in the hash table
void search(int data) {
    int index = hash_function(data);
    int i = index;
    while (hash_table[i].status != 0) {
        if (hash_table[i].status == 1 && hash_table[i].data == data) {
            printf("%d is found at index %d.\n", data, i);
            return;
        }
        i = (i + 1) % TABLE_SIZE;
        if (i == index) {
            printf("%d is not found in the hash table.\n", data);
            return;
        }
    }
    printf("%d is not found in the hash table.\n", data);
}

// Define a function to delete data from the hash table
void delete(int data) {
    int index = hash_function(data);
    int i = index;
    while (hash_table[i].status != 0) {
        if (hash_table[i].status == 1 && hash_table[i].data == data) {
            hash_table[i].status = -1;
            printf("%d has been deleted from index %d.\n", data, i);
            return;
        }
        i = (i + 1) % TABLE_SIZE;
        if (i == index) {
            printf("%d is not found in the hash table.\n", data);
            return;
        }
    }
    printf("%d is not found in the hash table.\n", data);
}

// Define a function to display the hash table
void display() {
    printf("Index\tData\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("%d\t", i);
        if (hash_table[i].status == 1) {
            printf("%d\n", hash_table[i].data);
        } else {
            printf("-\n");
        }
    }
}

int main() {
    int choice, data;
    for (int i = 0; i < TABLE_SIZE; i++) {
        hash_table[i].status = 0;
    }
    do {
        printf("1. Insert\n2. Search\n3. Delete\n4. Display\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the data to be inserted: ");
                scanf("%d", &data);
                insert(data);
                break;
            case 2:
printf("Enter the data to be searched: ");
scanf("%d", &data);
search(data);
break;
case 3:
printf("Enter the data to be deleted: ");
scanf("%d", &data);
delete(data);
break;
case 4:
display();
break;
case 5:
printf("Exiting...\n");
break;
default:printf("Invalid choice. Try again.\n");
}
} while (choice != 5);
return 0;
}
