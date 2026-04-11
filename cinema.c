#include <stdio.h>

int main (){
	int idade1, idade2, resto;
	printf("Qual a idade da primeira pessoa?");
	scanf("%d", &idade1);
	printf("Qual a idade da segunda pessoa?");
	scanf("%d", &idade2);
	
	resto= (idade1 % 2) + (idade2 % 2);
	
	if (resto == 0){
		printf("Vocês ganharam 50%% de desconto!!\n");
	}

	return 0;
}
