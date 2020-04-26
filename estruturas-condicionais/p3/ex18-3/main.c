#include <stdio.h>

int main() {
    char c;

    printf("Digite um caracter: ");
    scanf("%c", &c);

    switch (c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("E vogal\n");
            break;
    }

    return 0;
}
