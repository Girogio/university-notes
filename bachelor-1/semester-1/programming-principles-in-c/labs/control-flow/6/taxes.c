#include <stdio.h>
#include <ctype.h>
int main()
{
    float salary = 0;
    char ict;
    char collector;
    float net_salary = 0;

    int first_bracket = 10000;

    while (salary <= 0)
    {
        printf("Enter a valid salary: ");
        scanf("%f", &salary);
    }
    getchar();
    printf("\nAre you an employee in the ICT industry? (Y/n)");
    ict = getchar();
    getchar();
    printf("\nAre you a collector of old electronic equipment? (Y/n)");
    collector = getchar();

    if (tolower(collector) == 'y' | collector == '\n')
    {
        first_bracket = 15000;
    }

    if (salary > 180000)
    {
        net_salary = (first_bracket * 0.82) + (8000 * 0.8) + ((salary - 18000) * 0.75);
    }
    else if (salary > first_bracket)
    {
        net_salary = (first_bracket * 0.82) + ((salary - first_bracket) * 0.8);
    }
    else if (salary <= first_bracket)
    {
        net_salary = salary * 0.82;
    }

    if (tolower(ict) == 'y' | ict == '\n')
    {
        net_salary *= 0.95;
    }

    printf("Net salary: %.2f\n\n", net_salary);
}