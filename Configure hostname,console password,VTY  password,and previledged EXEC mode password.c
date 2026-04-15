#include <stdio.h> 
#include <string.h> 
 
// Structure to represent router configuration 
struct Router 
 { 
    char hostname[50]; 
    char consolePassword[50]; 
    char vtyPassword[50]; 
    char enablePassword[50]; 
}; 
 
// Function to configure router 
void configureRouter(struct Router *r)  
{ 
    // Configure hostname 
    printf("Enter router hostname: "); 
    fgets(r->hostname, sizeof(r->hostname), stdin); 
    r->hostname[strcspn(r->hostname, "\n")] = 0; // remove newline 
 
    // Configure console password 
    printf("Enter console password: "); 
    fgets(r->consolePassword, sizeof(r->consolePassword), stdin); 
    r->consolePassword[strcspn(r->consolePassword, "\n")] = 0; 
 
    // Configure VTY password 
    printf("Enter VTY password: "); 
    fgets(r->vtyPassword, sizeof(r->vtyPassword), stdin); 
    r->vtyPassword[strcspn(r->vtyPassword, "\n")] = 0; 
 
    // Configure privileged EXEC password 
    printf("Enter privileged EXEC (enable) password: "); 
    fgets(r->enablePassword, sizeof(r->enablePassword), stdin); 
    r->enablePassword[strcspn(r->enablePassword, "\n")] = 0; 
    printf("\nRouter configuration complete!\n"); 
} 
39 
 
 
 
// Function to display router configuration 
void showConfig(struct Router r)  
{ 
    printf("\n--- Router Configuration ---\n"); 
    printf("Hostname: %s\n", r.hostname); 
    printf("Console Password: %s\n", r.consolePassword); 
    printf("VTY Password: %s\n", r.vtyPassword); 
    printf("Privileged EXEC (Enable) Password: %s\n", r.enablePassword); 
    printf("----------------------------\n"); 
} 
int main()  
{ 
    struct Router myRouter; 
    configureRouter(&myRouter);     // Configure router 
    showConfig(myRouter); 
    return 0; 
}
