#include <stdio.h>

int main() {

	char palavras_secretas[20];

	palavras_secretas[0] = 'M';
	palavras_secretas[1] = 'E';
	palavras_secretas[2] = 'L';
	palavras_secretas[3] = 'A';
	palavras_secretas[4] = 'N';
	palavras_secretas[5] = 'C';
	palavras_secretas[6] = 'I';
	palavras_secretas[7] = 'A';

	printf("%c%c%c%c%c%c%c%c", palavras_secretas[0], palavras_secretas[1], palavras_secretas[2], 
		palavras_secretas[3], palavras_secretas[4], palavras_secretas[5], palavras_secretas[6],
		palavras_secretas[7]);

	//Imprime um array de chars
	sprintf(palavras_secretas, "MELANCIA");
	printf("\n%s", palavras_secretas);
}