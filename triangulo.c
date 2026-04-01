#include <stdio.h>

int main(){
	float base, altura, area;
	
	printf("Qual a base desse triangulo? ");
	scanf("%f", &base);
	printf("Qual a altura desse triangulo? ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("A area desse triangulo é: %.2f\n", area);

	return 0;
}
