//Writing to allocated memory....

#include <Windows.h>
#include <stdio.h>

int main(){

    PVOID pAddress = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, 100); //memory initialized all zero

    if(!pAddress){

        puts("[!] Failed to Allocate memory.\n");
        return EXIT_FAILURE;
    }

    char* string = "Hello from Nik";

    memcpy(pAddress, string, strlen(string)); 

    printf("[+] Base address of allocated memory.. 0x%p\n", pAddress );
    
    printf("[+] String copied to pAddress is : %s\n", pAddress);
    
    puts("[-] Exiting Program...\n");

    return EXIT_SUCCESS;

}