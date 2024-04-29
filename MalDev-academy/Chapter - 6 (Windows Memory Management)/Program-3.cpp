//After Writing to allocated memory... Freeing up the memory ...

#include <Windows.h>
#include <stdio.h>

int main(){

    HANDLE hHeap = GetProcessHeap();

    PVOID pAddress = HeapAlloc(hHeap, HEAP_ZERO_MEMORY, 100); //memory initialized all zero

    if(!pAddress){

        puts("[!] Failed to Allocate memory.\n");
        return EXIT_FAILURE;
    }

    char* string = "Hello from Nik";

    memcpy(pAddress, string, strlen(string)); 

    printf("[+] Base address of allocated memory.. 0x%p\n", pAddress );

    printf("[+] String copied to pAddress is : %s\n", pAddress);

    puts("[-] Freeing up the memory before exiting ...\n");

    HeapFree(hHeap,0,pAddress);

    printf("[+] Address after freeing up the allocated memory.. 0x%p\n", pAddress ); //remains same

    printf("[+] String after freeing the pAddress is : %s\n", pAddress);  // prevents memory leak
    
    puts("[-] Exiting Program...\n");

    return EXIT_SUCCESS;

}