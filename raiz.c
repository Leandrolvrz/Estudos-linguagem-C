#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, delta;
	float x1, x2;

	printf("Digite os valores de a, b  e c em ordem: ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == 0){
		printf("Não existe equação de segundo grau");
	}
	else {
		delta = pow (b,2) - (4 * a * c );
		if (delta < 0){
			printf("O delta é negativo, não existe raiz");
		}
	else {
		x1 = (-b + sqrt (delta))/ (2 * a);
		x2 = (-b - sqrt (delta))/ (2 * a);
		printf("Os valores da raiz são: %.2f e %.2f\n", x1, x2);
	}
}

	return 0;
}
	
