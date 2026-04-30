#include <stdio.h> 
int main()  
{ 
    int aa, bb, cc, dd; 
    char ip[20]; 
    printf("Enter an IP Address: "); 
    scanf("%s", ip); 
 
     if (sscanf(ip, "%d.%d.%d.%d", &aa, &bb, &cc, &dd) != 4)  
    { 
        printf("Invalid IP format!\n"); 
        return 0; 
     } 
    // check range 
    if (aa < 0 || aa > 255 || bb < 0 || bb > 255 || cc < 0 || cc > 255 || dd < 0 || dd > 255) { 
        printf("Invalid IP Address!\n"); 
        return 0; 
    } 
  
    if (aa >= 1 && aa <= 126) // Check Class A (1 – 126) 
    { 
        printf("The IP Address is Class A.\n"); 
    } 
     else  
    { 
        printf("The IP Address is NOT Class A.\n"); 
    } 
    return 0; 
}
