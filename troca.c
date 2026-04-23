#include <stdio.h>

int main (){
	int a, b, temporario;
	
	scanf ("%i%i", &a, &b);
	
	if (a>b){
		temporario = a;
		a = b;
		b = temporario;
	}
	printf ("%i %i\n", a, b);

	return 0;
}
	
