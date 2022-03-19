#include "unistd.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv, char **env) {

  printf("\nArguments: \n\n");
  for (char **args = argv; *args != 0; args++)
    printf("%s\n", *args);

  puts("\n");

  printf("Environment variables: \n\n");
  for (char **envs = env; *env != 0; env++)
    printf("%s\n", *env);

  return 0;
}