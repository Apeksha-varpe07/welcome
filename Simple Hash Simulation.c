#include <stdio.h> 
#include <string.h> 
 
int simple_hash(const char *str)  
{ 
    int hash = 0; 
    for (int i = 0; str[i] != '\0'; i++)  
    { 
        hash += str[i];  // add ASCII values 
    } 
    return hash; 
} 
 
int main() { 
    char password[] = "MJG"; 
    int hash_value = simple_hash(password); 
 
    printf("Password: %s\n", password); 
    printf("Hash value: %d\n", hash_value); 
    return 0; 
} 
