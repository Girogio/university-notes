#include <stdio.h>

int main() {
    int x, y;
    printf("Input two numbers:\n> ");
    scanf("%d", &x);
    printf("> ");
    scanf("%d", &y);

    printf("Recursive gcd implementation of %d and %d: %d", x, y, r_gcd(x, y));
    printf("\nIterative gcd implementation of %d and %d: %d", x, y, i_gcd(x, y));
    return 0;
}

int i_gcd(int x, int y) {
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
}

int r_gcd(int x, int y) {
    if (y == 0)
        return x;
    return r_gcd(y, (x % y));
}