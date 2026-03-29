#include <stdio.h>	

int main () {
	int a, b, c, media;
	printf("Digite os valores para media:");
	scanf("%d %d %d", &a, &b, &c);
	media= (a + b + c)/3;
	printf("A media dos valores %d %d e %d é:%d\n",a, b , c, media);

	int x, y, divisao, resto;
	printf("Digite os valores para saber sua divisao e resto:");
	scanf("%d %d", &x, &y);
	divisao= x/y;
	resto= x%y;
	printf("A divisao de %d por %d e: %d\n E o resto e:%d\n",x, y, divisao, resto);
	return 0;
}
