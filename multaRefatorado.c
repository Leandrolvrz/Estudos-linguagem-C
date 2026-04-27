//Refatorando o codigo do ultimo exercicio, para melhor eficiencia e logica
#include <stdio.h>

int main(){
	float velocidade_via = 80;
	float velocidade_carro, acima;
	// Mudamos algumas variaveis para melhorar a eficiencia do codigo

	printf ("Qual a velocidade do carro? ");
	scanf ("%f", &velocidade_carro);

	// Mantemos a mesma logica anterior de velocidade da via
	acima = velocidade_carro / velocidade_via;

	//Calcular resultados
	if (acima < 1){
		printf ("Velocidade dentro do permitido\n");
		return 0;
	}
	if (acima < 1.2){
		printf ("Velocidade acima do permitido\n");
		printf ("Multa de R$ 85,15\n");
		printf ("4 Pontos na carteira\n");
		return 0;
	}
	if (acima < 1.5){
		printf ("Velocidade acima do permitido\n");
		printf ("Multa de R$ 127,69\n");
		printf ("5 Pontos na carteira\n");
		return 0;
	}

	// Se nenhum if for verdadeiro, significa que so o ultimo print pode ser executado
	// Sem a necessidade de adicionar mais uma condifcional
	printf ("Velocidade MUITO acima do limite\n");
	printf ("Multa de R$ 574,62\n");
	printf ("7 Pontos na carteira\n");
	printf ("Apreensao imediata da carteira e Suspensao do direito de dirigir!!\n");

return 0;
}
