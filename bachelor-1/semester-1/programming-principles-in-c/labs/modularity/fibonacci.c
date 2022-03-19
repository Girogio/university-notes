#include <stdio.h>

int r_fib(int n);

int main() {
    // Base cases definition
    int n, first = 0, second = 1, result;

    printf("Input an index of the fibonacci sequence:\n> ");

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i <= 1)
            result = i;
        else {
            result = first + second;
            first = second;
            second = result;
        }
    }
    printf("Term #%d of the iterative fibonacci sequence: %d\n", n, result);
    printf("Term #%d of the recursive fibonacci sequence: %d\n", n, r_fib(n));
    return 0;
}


int r_fib(int n) {
    // Base cases definition.
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    return r_fib(n - 1) + r_fib(n - 2);
}


// It is apparent that a recursive definition of the nth fibonacci number is much cleaner in terms of code complexity.
