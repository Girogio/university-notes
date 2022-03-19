#include "stdio.h"
#include "stdlib.h"

void exit1(void) { printf("Exit 1executed\n"); }
void exit2(void) { printf("Exit 2 executed\n"); }
void exit3(void) { printf("Exit 3 executed\n"); }

int main() {

  if (atexit(exit1) || atexit(exit2) || atexit(exit3))
    perror("Failed to bind error handler.");

  return 0;
}