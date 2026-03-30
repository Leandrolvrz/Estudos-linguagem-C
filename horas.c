#include <stdio.h> 

int main (){
	float a, b, minutos, horas;
	printf("Digite os segundos para saber os minutos:");
	scanf("%f", &a);
	minutos= a/60;
	horas=minutos/60;
	printf ("%.2f segundos é em minutos:%.2f min. E em horas %.2fh\n", a, minutos, horas);
	printf("Para saber a quantidade em horas, digite os minutos:");
	scanf("%f", &b);
	horas=b/60;
	printf("%.2f minutos é em horas:%.2fh", b, horas);
	return 0;
}
