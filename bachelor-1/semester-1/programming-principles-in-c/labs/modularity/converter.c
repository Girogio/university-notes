//
// Created by grongo on 11/26/21.
//

#include <stdio.h>

void print_menu() {
    printf("\n1. Base 16\n2. Reverse string\n> ");
}

void decToHex(int no) {
    int hex;
    if (no == 0)
        return;
    else {
        hex = no % 16;
        decToHex(no / 16);
    }
    if (hex > 9)
        printf("%c", 'A' + (hex - 10));
    else
        printf("%d", hex);
}


int main() {
    char n = 'a';
    int toHex;
    char *toReverse[31];

    while (n != '3') {
        print_menu();
        n = getchar();
        getchar();
        switch (n) {
            case '1':
                printf("Input number: \n> ");
                scanf("%d", &toHex);
                decToHex(toHex);
                break;
            case '2':
                printf("2");
                break;
            case '3':
                printf("Exiting...\n");
                break;
            default:
                printf("Try again...\n");
        }
    }

    return 0;

}



