#include <stdio.h>

int main (){
	int asterisco;

	printf("Digite a largura da base: ");
	scanf ("%i", &asterisco);

	for (int i= 1; i <= asterisco; i++){
		for (int j =1; j <= i; j++){
			printf ("*");
		}
		printf ("\n");
	}

	return 0;
}
