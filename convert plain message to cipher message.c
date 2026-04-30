#include <stdio.h> 
#include <ctype.h> 
 
int main() { 
    char msg[1000]; 
    int key; 
 
    printf("Enter message: "); 
    fgets(msg, sizeof(msg), stdin); 
 
    printf("Enter key value: "); 
    scanf("%d", &key); 
 
    for (int i = 0; msg[i] != '\0'; i++) { 
        char ch = msg[i]; 
 
        // Encrypt uppercase letters 
        if (ch >= 'A' && ch <= 'Z') { 
            ch = (ch - 'A' + key) % 26 + 'A'; 
        } 
        // Encrypt lowercase letters 
        else if (ch >= 'a' && ch <= 'z') { 
            ch = (ch - 'a' + key) % 26 + 'a'; 
        } 
 
        msg[i] = ch; 
    } 
    printf("Encrypted message: %s\n", msg); 
 
    return 0; 
}
