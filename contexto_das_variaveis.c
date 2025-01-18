#include <stdio.h>

void joga(int tentativas) {
	printf("joga %d\n", tentativas); //2
	tentativas++;
	printf("joga %d\n", tentativas); //3
}

int main() {

	/**
		A variável tentativas na última linha voltou a ser 2, porque se refere a mesma variável anterior,
		ao invés de se referir a tentativas dentro da função joga, pois dentro dessa função não é a mesma
		variável. As duas são variáveis distintas.
	**/

	int tentativas = 0;

	printf("main %d\n", tentativas); //0

	tentativas++;
	printf("main %d\n", tentativas); //1

	tentativas++;
	printf("main %d\n", tentativas); //2

	joga(tentativas);

	printf("main %d\n", tentativas); //2
}