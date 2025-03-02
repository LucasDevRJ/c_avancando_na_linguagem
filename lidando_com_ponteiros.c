#include <stdio.h>

int soma(int* num, int* a, int* b) {
    (*num) = (*a) + (*b);
    return (*num);
}

int main() {
    int num, a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    num = soma(&num, &a, &b);

    printf("%d + %d = %d", a, b, num);
}