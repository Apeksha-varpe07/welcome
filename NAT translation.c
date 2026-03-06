#include <stdio.h> 
int main() { 
char insideLocal[] = "192.168.1.10"; 
char insideGlobal[] = "200.1.1.10"; 
printf("Inside Local IP : %s\n", insideLocal); 
printf("Inside Global IP : %s\n", insideGlobal); 
printf("NAT Translation Successful!\n"); 
return 0; 
}
