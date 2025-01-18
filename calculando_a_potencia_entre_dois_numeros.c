#include <stdio.h>
#include <math.h>

double potencia(int a, int b) {
	double c = pow(a, b);
	return c;
}

int main() {
	int a, b;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	double c = potencia(a, b);
	printf("%d elevado a %d equivale a %.1lf", a, b, c);
}