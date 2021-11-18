#include <stdio.h>

int main()
{

  char names[11][20];
  char surnames[11][20];
  short age[11];
  double salary[11];

  for (int i = 0; i < 10; i++)
  {
    printf("Enter employee #%d name: \n<< "), i + 1;
    scanf("%s", names[i]);
    printf("Enter employee #%d surname: \n<< ");
    scanf("%s", surnames[i]);
    printf("Enter employee #%d name: \n<< ");
    scanf("%hd", age[i]);
    printf("Enter employee #%d salary: \n<< ");
    scanf("%d", salary[i]);
    printf("--------------------------------\n");
    
  }

  return 0;
}
