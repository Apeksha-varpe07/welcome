#include <stdio.h>  
#include <string.h> 
#include <stdlib.h> 
 
#define MAX_NAT 100 
typedef struct { 
    char inside_local[16]; 
    char inside_global[16]; 
} NAT_Entry; 
 
NAT_Entry nat_table[MAX_NAT]; 
int nat_count = 0; 
 
void add_nat_entry(const char *local, const char *global)  
{ 
    if (nat_count >= MAX_NAT)  
   { 
        printf("Error: NAT table full!\n"); 
        return; 
    } 
    strcpy(nat_table[nat_count].inside_local, local); 
    strcpy(nat_table[nat_count].inside_global, global); 
    nat_count++; 
    printf("Added NAT entry: %s -> %s\n", local, global); 
} 
 
int find_nat_local(const char *local)  
{ 
    for (int i = 0; i < nat_count; i++) { 
        if (strcmp(nat_table[i].inside_local, local) == 0) 
            return i; 
    } 
    return -1; 
} 
int find_nat_global(const char *global)  
{ 
    for (int i = 0; i < nat_count; i++)  
{ 
if (strcmp(nat_table[i].inside_global, global) == 0) 
            return i; 
    } 
    return -1; 
} 
void delete_nat_entry(const char *local)  
{ 
    int index = find_nat_local(local); 
    if (index == -1) { 
        printf("Entry not found.\n"); 
        return; 
    } 
 
    for (int i = index; i < nat_count - 1; i++) 
        nat_table[i] = nat_table[i + 1]; 
        nat_count--; 
    printf("Deleted NAT entry for %s\n", local); 
} 
void print_nat_table()  
{ 
    printf("\n***NAT Translation Table ***\n"); 
    printf("Inside Local       Inside Global\n"); 
    printf("--------------------------------------\n"); 
 
    for (int i = 0; i < nat_count; i++)  
   { 
        printf("%-18s %-18s\n", 
               nat_table[i].inside_local, 
               nat_table[i].inside_global); 
    } 
    printf("--------------------------------------\n\n"); 
} 
void translate_packet(const char *src_ip)  
{ 
    int index = find_nat_local(src_ip); 
    if (index != -1)  
    { 
        printf("Outbound packet: %s -> %s (NAT applied)\n", 
               nat_table[index].inside_local, 
               nat_table[index].inside_global); 
return; 
    } 
 
    index = find_nat_global(src_ip); 
    if (index != -1)  
     { 
        printf("Inbound packet: %s -> %s (Reverse NAT)\n", 
               nat_table[index].inside_global, 
               nat_table[index].inside_local); 
        return; 
    } 
 
    printf("Packet from %s: No NAT entry found.\n", src_ip); 
} 
void show_menu()  
 { 
    printf("\n=== NAT Simulator ===\n"); 
    printf("1. Add NAT Entry\n"); 
    printf("2. Delete NAT Entry\n"); 
    printf("3. Show NAT Table\n"); 
    printf("4. Translate IP Packet\n"); 
    printf("5. Exit\n"); 
    printf("Choose option: "); 
} 
int main()  
{ 
    int choice; 
    char local[16], global[16], packet_ip[16]; 
    while (1)  
     { 
        show_menu(); 
        scanf("%d", &choice); 
 
        switch (choice)  
         { 
            case 1: 
                printf("Enter Inside Local IP: "); 
                scanf("%s", local); 
                printf("Enter Inside Global IP: "); 
                scanf("%s", global); 
                add_nat_entry(local, global); 
                break; 
            case 2: 
                printf("Enter Inside Local IP to delete: "); 
                scanf("%s", local); 
                delete_nat_entry(local); 
                break; 
            case 3: 
                print_nat_table(); 
                break; 
            case 4: 
                printf("Enter packet source IP: "); 
                scanf("%s", packet_ip); 
                translate_packet(packet_ip); 
                break; 
            case 5: 
                printf("Exiting...\n"); 
                exit(0); 
            default: 
                printf("Invalid choice!\n"); 
        } 
    } 
    return 0; 
} 
