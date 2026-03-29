//Progama em C que faz o consumo médio de combustível

#include <stdio.h>

int main() {
	float distancia, consumo, resultado;
	printf("Qual a distancia percorrida?");
	scanf("%f", &distancia);
	printf("Qual foi o consumo de combustivel do carro?");
	scanf("%f", &consumo);
	resultado= distancia/consumo;
	printf("Seu carro fez um media de:%.1fKm/L", resultado);
	return 0;
}
