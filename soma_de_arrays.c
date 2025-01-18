#include <stdio.h>

int soma(int numeros[10]) {
	int soma = 0;
	for (int i = 0; i < 10; i++) {
		soma += numeros[i];
	}
	return soma;
}

int main() {
	int numeros[10];

	for (int i = 0; i < 10; i++) {
		printf("Digite o %d numero: ", i+1);
		scanf("%d", &numeros[i]);
	}

	int somatorio = soma(numeros);

	printf("O valor da soma dos numeros e %d", somatorio);
}