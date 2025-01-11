#include <stdio.h>
#include <string.h>

int main() {

	char palavras_secretas[20];

	sprintf(palavras_secretas, "MELANCIA");

	int acertou = 0;
	int enforcou = 1;

	do {
		char chute;
		printf("Qual letra? ");
		scanf("%c", &chute);

		for (int i = 0; i < strlen(palavras_secretas); i++) {
			if (palavras_secretas[i] == chute) {
				printf("A posicao %d tem essa letra!\n", i);
			}
		}

	} while (!acertou && !enforcou);
	
} 