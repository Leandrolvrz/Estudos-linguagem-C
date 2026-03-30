#include <stdio.h>

int main (){
	float a, b, c, f1, f2, f3, f4, pot; //f1, f2...Representam respectivamente fórmula 1, fórmula 2... e pot se refere a potencia;

	printf("Qual o primeiro valor?");
	scanf("%f", &a);
	printf("Qual o segundo valor?");
	scanf("%f", &b);
	printf("Qual o terceiro valor?");
	scanf("%f", &c);

	f1= (a * b)/c;
	f2= (a * a) + b + (5*c);
	f3= a * b * c + b + (c/3 * 5) - 1;
	pot= (a * b * c);
	f4= (pot * pot * pot)/2;

	printf("Os resultados da fórmula (1):%.2f, da fórmula (2):%.2f, da fórmula (3):%.2f, da fórmula (4):%2.f\n", f1, f2, f3, f4);
	printf("Parabéns vocẽ explodiu seu inimigo!!\n");
	return 0;
}
	
