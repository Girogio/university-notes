#include <stdbool.h>
#include <stdio.h>

#define HELLO_WORLD

void print_string(char *p_string, int p_count, bool p_reverse);

int main(int argc, char **argv) {

#ifdef HELLO_WORLD
  printf("Hello world!\n");
#else 
  print_string("lmao", 3, false);
#endif

  return 0;
}

void print_string(char *p_string, int p_count, bool p_reverse) {
  if (p_reverse) {
    for (int i = 0; i < p_count; i++)
      printf("%s %d\n", p_string, i);
  } else {
    for (int i = p_count; i > 0; i--)
      printf("%s %d\n", p_string, i);
  }
}