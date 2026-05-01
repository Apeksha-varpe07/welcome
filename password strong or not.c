#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
int main()  
{ 
    char password[50]; 
    int upper = 0, lower = 0, digit = 0; 
    printf("Enter a password to check: "); 
    fgets(password, sizeof(password), stdin); 
    password[strcspn(password, "\n")] = '\0';   
    if (strlen(password) < 8)  
    { 
        printf("Weak Password: Must be at least 8 characters.\n"); 
        return 0; 
    } 
  for (int i = 0; password[i] != '\0'; i++) // Check character types 
{ 
        if (isupper(password[i])) upper = 1; 
        else if (islower(password[i])) lower = 1; 
        else if (isdigit(password[i])) digit = 1; 
    } 
    if (upper && lower && digit)  
    { 
        printf("Strong Password!\n"); 
    }  
    else  
    { 
        printf("Weak Password: Include uppercase, lowercase, and digits.\n"); 
    } 
    return 0; 
} 
