#include <stdio.h>

int main(){
	float velocidade_via, velocidade_carro, multa, ponto, acima, apreender_carteira;

	velocidade_via = 80;
	ponto= 0; //Zera seus pontos na carteira
	apreender_carteira = 1; //Caso exceda o numero de pontos possiveis, o valor se torna verdadeiro e requer apreensao da carteira
	//Caso contrario, o valor continua 1 (Falso) e executa outra acao

	printf ("Qual velocidade o carro estava? ");
	scanf ("%f", &velocidade_carro);

	//Calcular velocidade acima da permitida
	acima = velocidade_carro / velocidade_via; //Se o valor for maior que 1, significa que o carro ultrapassou o limite de velocidade

	if (acima > 1.2){
		multa = 85,13;
		ponto = 4;
	}
	if (acima < 1.5){
		multa = 127,69;
		ponto = 5;
	}
	if (acima >= 1.5){
		multa = 574,62;
		ponto = 7;
		apreender_carteira = 0;
		//printf("APREENSÂO DA CARTEIRA E SUSPENSÂO DO DIREITO DE DIRIGIR!!");
	}
	if (apreender_carteira == 0){
		printf ("O valor da multa e: R$%.2f, possui %.2f pontos na carteira\n", multa, ponto);
		printf ("!! Deve-se apreender a carteira e suspender o direito de dirigir do autor !!\n");
	}
	if (apreender_carteira == 1){
		printf ("O valor da sua multa é: R$%.2f e  você possui: %.2f pontos\n", multa, ponto);
	}

	return 0;
}
