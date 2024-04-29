-> Two different modes: User Mode and Kernel Mode.

-> ![alt text](image.png)

-> Flow:
    User Processes --> Subsystem DLLs(kernel32.dll, ntdll.dll, advapi32.dll) --> Ntdll(Native API) --> Executive kernel(ntoskrnl.exe)

-> ![alt text](image-1.png)

->  Windows API simply acts as a wrapper for the Native API.
