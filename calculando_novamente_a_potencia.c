#include <stdio.h>
#include <math.h>

int potencia(int* resultado, int* base, int* expoente) {
	(*resultado) = pow(*base, *expoente);
	return (*resultado);
}

int main() {
	int base, expoente, resultado;

	printf("Digite o valor da base: ");
	scanf("%d", &base);

	printf("Digite o valor do expoente: ");
	scanf("%d", &expoente);

	resultado = potencia(&resultado, &base, &expoente);

	printf("%d ^ %d = %d\n", base, expoente, resultado);
}