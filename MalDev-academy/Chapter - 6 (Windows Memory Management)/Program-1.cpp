//The allocation returns address pointing at the base address of allocated memory... 

#include <Windows.h>
#include <stdio.h>

int main(){

    PVOID pAddress = HeapAlloc(GetProcessHeap(), 0, 100);

    if(!pAddress){

        puts("[!] Failed to Allocate memory.\n");
        return EXIT_FAILURE;
    }

    printf("[+]  Base address of allocated memory.. 0x%p\n", pAddress );
    
    puts("[-] Exiting Program\n");

    return EXIT_SUCCESS;

}