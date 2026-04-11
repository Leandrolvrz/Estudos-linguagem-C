#include <stdio.h>

int main (){
	float  sal, aum, sal_aum;
	
	printf("Digite seu salário: ");
	scanf("%f", &sal);
	
	if (sal <= 1000){
		aum= sal * 0.15;
		sal_aum= sal + aum;
	} else if (sal > 1000 && sal <= 2000){
		aum= sal * 0.1;
		sal_aum= sal + aum;
	}else if (sal > 2000) {
		aum= sal * 0.05;
		sal_aum= sal + aum;
	}
	
	printf("Seu aumento foi de R$%.2f e seu novo salário agora é de: R$%.2f \n", aum, sal_aum);
	
	return 0;
}
