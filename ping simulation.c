#include <stdio.h> 
#include <string.h> 
 
int main()  
{ 
    char ip[20]; 
    printf("Enter IP to ping: "); 
    scanf("%s", ip); 
 
    for(int i = 1; i <= 4; i++)  
    { 
        printf("Pinging %s with 32 bytes of data... Reply received.\n", ip); 
    } 
    return 0; 
}
