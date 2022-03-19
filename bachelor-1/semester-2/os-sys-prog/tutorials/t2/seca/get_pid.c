#include <unistd.h>
#include <stdio.h>
#define PARENT

int main(int argc, char **argv ){
    
    #ifdef PARENT
    int pid = getppid();
    #else
    int pid = getpid();
    #endif

    printf("%d", pid);

    return 0;
}