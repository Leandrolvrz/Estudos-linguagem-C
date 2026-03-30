#include <stdio.h>

int main (){
	int a,b;
	float soma, sub, mult, div, resto;
	printf("Digite seu primeiro valor:");
	scanf("%d", &a);
	printf("Digite seu segundo valor:");
	scanf("%d", &b);
	soma= a + b;
	sub= a - b;
	mult= a * b;
	div= a / b;
	resto= a % b;
	printf("A soma de %d e %d: %.0f.\nA subtração: %.0f.\nA multiplicacao: %.2f.\nA divisao: %.2f\nE o seu resto:%.2f\n", a,b, soma, sub, mult, div, resto);
	return 0;
}
