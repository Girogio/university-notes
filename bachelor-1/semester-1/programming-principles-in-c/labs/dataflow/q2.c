#include <stdio.h>

int main(){
  int character;
  printf("Input integer: ");
  scanf("%d", &character);
  printf("Character equivalent: '%c'\n", character);
  printf("Octal equivalent: '%#o'\n", character);
  printf("Hexadecimal equivalent: '%#x'\n", character);
  //If no character is found, nothing is printed.
  return 0;
}
