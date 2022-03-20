#include "stdlib.h"
#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>

void multi_fork(int n) {
  if (n == 0)
    exit(0);
  if (fork() == 0) { 
    printf("PPID: [%d] -> PID of forked process %d: [%d]\n", getppid(), n, getpid());
    multi_fork(--n);
  }
  wait(NULL);
}

int main(int argc, char **argv) {

  if (argc < 2) {
    printf("Not enough arguments.\n");
    exit(EXIT_FAILURE);
  }

  int num = atoi(argv[1]);

  if (num < 1 || num > 10) {
    printf("Out of bounds input.\n");
    exit(EXIT_FAILURE);
  }

  multi_fork(num);

  return 0;
}
