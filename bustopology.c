#include <stdio.h> 
int main()  
{ 
    int n; 
 
 
34 
 
 
    printf("Enter number of computers in bus topology: "); 
    scanf("%d", &n); 
    if (n < 2)  
   { 
        printf("Bus topology requires at least 2 computers.\n"); 
        return 0; 
    } 
    printf("\n----- BUS TOPOLOGY -----\n\n"); 
 
    // Print computers and bus line 
    for (int i = 1; i <= n; i++)  
   { 
        printf(" [PC-%d] ", i); 
        if (i != n) 
            printf("───┬───"); 
    } 
    printf("\n"); 
            for (int i = 1; i <= n; i++)  
   { 
        printf("        "); 
        if (i != n) 
            printf("│"); 
    } 
    printf("\n"); 
    for (int i = 1; i <= n - 1; i++)  
   { 
        printf("──────────"); 
    } 
    printf("\n\nBackbone Bus: ───────────────\n"); 
    printf("Terminators at both ends.\n"); 
    return 0; 
} 
