#include <stdio.h>
void calcula(int* c) { //recebendo a variável desejada como parâmetro
	printf("calcula %d %d\n", (*c)); //pegando o valor da variável ao invés da referência dela
	(*c)++; //somando mais um na variável
}
int main() {
	int c = 10;
	printf("main %d %d\n", c, &c); //main 10 - referência de memória
	calcula(&c); //passando esta variável como parâmetro
	printf("main %d %d\n", c, &c); //main 11 - referência de memória
}