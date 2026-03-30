#include <stdio.h>

int main(){
	float peso, altura, imc;

	printf("Insira seu peso:");
	scanf("%f", &peso);

	printf("Insira sua altura:");
	scanf("%f", &altura);

	imc=peso/(altura*altura);

	printf("Seu imc é aproximadamente:%.2f\n",imc);

	if(imc<18.5){
		printf("Você está abaixo do peso!!\n");
	}else if(imc>=18.5 && imc<24.9){
		printf("Voĉe está com um peso normal\n");
	}else if(imc>25 && imc<29.9){
		printf("Vocẽ está com excesso de peso\n");
	}else if(imc>30 && imc<34.9){
		printf("Vocẽ está com Obesidade classe I!!\n");
	}else if(imc>35 && imc<39.9){
		printf("Você está com Obesidade classe II!!\n");
	}else {
		printf("Vocẽ está com Obesidade classe III!!!!\n");
	}

	return 0;
}
