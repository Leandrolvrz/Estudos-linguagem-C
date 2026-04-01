#include <stdio.h>

int main() {
	int quantidade_cafe, valor_dado, troco_perdido, valor_cafe, valor_pedido;
	valor_cafe= 7;
	
	printf("Quantos cafés voce vai querer? ");
	scanf("%d", &quantidade_cafe);
	valor_pedido= valor_cafe * quantidade_cafe;
	printf("Isso vai custar %d reais. ", valor_pedido);
	printf("No momento só aceitamos dinheiro!!\n");
	printf("Quanto voce ira entregar em dinheiro? ");
	scanf("%d", &valor_dado);
	
	troco_perdido= valor_dado - (quantidade_cafe * valor_cafe);
	printf("Infelizmente voce perdera %d reais nessa ação\n", troco_perdido);
	
	return 0;
}
