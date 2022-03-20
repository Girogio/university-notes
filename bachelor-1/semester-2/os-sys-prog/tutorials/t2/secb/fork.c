#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {

  pid_t forked_id = fork();

  if (!forked_id)
    printf("Parent PID: %d\nChild PID: %d\n\n", getppid(), getpid());

  return 0;
}