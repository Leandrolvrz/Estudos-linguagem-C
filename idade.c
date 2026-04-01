//Primeiro exercicio do livro ensinado IF, o código consiste num verificado de idade usando apenas IF para verificar se a idade da pessoa é maior ou igual 18
#include <stdio.h>

int main(){
	int idade;
	printf("Qual a sua idade?");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("Maior de idade\n");
	}
	return 0;
}
