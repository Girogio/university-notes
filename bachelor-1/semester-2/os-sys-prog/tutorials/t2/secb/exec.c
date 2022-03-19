#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

int main(int argc, char **argv) { 

   char * const args[] = {
     "top", "-d", "2", "-n", "10", NULL
    };
    
	if (execvp("/bin/top", args)) {
		perror("execl failed:");
		exit(1);
	}
  
  return 0; }