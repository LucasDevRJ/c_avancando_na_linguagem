#include <stdio.h>

void abertura(int numero) {
	printf("Tabuada do %d\n\n", numero);
}

int main() {

	int multiplicador = 2;

	abertura(multiplicador);

	for (int i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", multiplicador, i, multiplicador * i);
	}

}