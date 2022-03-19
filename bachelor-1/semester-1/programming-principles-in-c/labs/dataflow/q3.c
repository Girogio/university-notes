#include <stdio.h>
#include <string.h>

//swapping of the chars in the char array
char *strrev(char *str1)
{
  int i, len, temp;
  len = strlen(str1);

  for (i = 0; i < len / 2; i++)
  {
    temp = str1[i];
    str1[i] = str1[len - i - 1];
    str1[len - i - 1] = temp;
  }
  return str1;
}

int main()
{
  char word1[20];
  char word2[20];
  char word3[20];

  printf("Enter first word: ");
  scanf("%s", word1);
  printf("Enter second word: ");
  scanf("%s", word2);
  printf("Enter third word: ");
  scanf("%s", word3);

  printf("%s\n", strrev(word1));
  printf("%s\n", strrev(word2));
  printf("%s\n", strrev(word3));

  return 0;
}