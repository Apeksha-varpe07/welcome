#include <stdio.h> 
int main() { 
printf("Traceroute Result:\n"); 
printf("Hop 1 -> 10.0.0.1\n"); 
printf("Hop 2 -> 10.0.0.2\n"); 
printf("Destination Reached\n\n"); 
printf("Routing Table:\n"); 
printf("C 192.168.1.0/24 Directly Connected\n"); 
printf("R 192.168.2.0/24 via 10.0.0.2\n"); 
return 0; 
}
