// Exercicío comentado: 
// A corrida de Aventura: O objetivo da corrida é chegar no final da floresta, todos partem do mesmo ponto.
// Vence quem chegar em menos tempo.
// Cada jogador pode escolher sua trilha e seguir sua sequencia de numeros (Ex: Trilha 1, Sequencia 1 4 6
// O Objetivo do codigo e informar se a trilha feita e valida e quem ganhou a corrida.
#include <stdio.h>

int main (){
	int caminho;

	//Validação e escolha do caminho
	printf ("Escolha seu primeiro caminho: ");
	scanf ("%i", &caminho);

	//Primeiro caminho:
	if (caminho == 1){
		printf("Digite sua segunda opcao: ");
			scanf("%i", &caminho);
				if (caminho == 4){
					printf("Digite sua terceira escolha: ");
					scanf("%i", &caminho);
						if (caminho == 6){
							printf("Parabens, voce chegou ao destino da forma mais rapida. VOCE GANHOU!!\n");
						}
						else {
							printf ("Caminho invalido\n\n");
						}
				}
				else {
					printf("Caminho invalido\n\n");
				}
	}
	else if (caminho == 2){
		printf ("O caminho escolhido nao leva a nenhum lugar. Voce perdeu!\n\n");
	}
	else if (caminho == 3){
		printf ("Digite sua segunda escolha: ");
		scanf ("%i", &caminho);
			if (caminho == 5){
				printf ("Digite sua terceira escolha: ");
				scanf ("%i", &caminho);
					if (caminho ==  7){
						printf ("Digite o quarto caminho: ");
						scanf ("%i", &caminho);
							if (caminho == 8){
								printf("Parabens, voce chegou ao destino!!\n\n");
							}
							else {
								printf("Caminho invalido\n\n");
							}
					}
					else {
						printf("Caminho invalido\n\n");
					}
			}
			else {
				printf("Caminho invalido\n\n");
			}
	}

	else {
		printf("Caminho invalido\n\n");
	}

	//Printar o mapa dado no exercicio 7.8 do livro Indroducao a Progamacao com linguagem C
        printf ("Mapa:         \n");
        printf ("   Partida    \n");
        //Primeira parte do mapa
        printf ("  /  |  \\    \n");
        printf (" 1   2    3   \n");
        printf (" |   |   /    \n");
        //Segunda parte de caminhos
        printf (" |   |  5     \n");
        printf (" |   |   \\   \n");
        printf (" 4   ~    7   \n");
        printf (" |         \\ \n");
        //Terceira linha de caminhos
        printf (" 6         8  \n");
        printf ("  \\       /  \n");
        //Quarta linha de caminhos
        printf ("   Destino  \n\n");

return 0;
}

