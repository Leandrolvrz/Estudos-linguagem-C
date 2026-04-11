#include <stdio.h>

int main(){
	float sal, aum, aum_sal;
	
	printf("Digite seu salario: ");
	scanf("%f", &sal);
		
	if (sal <= 1000){
		aum= sal * 0.15;
		aum_sal= sal + aum;
	}	
	if ( sal> 1000 && sal <= 2000){
		aum= sal * 0.1;
		aum_sal= sal + aum;
	}
	if (sal > 2000){
		aum= sal * 0.05	;
		aum_sal= sal + aum;
	}
	
	printf("Seu aumento foi de R$%.2f e seu salário agora é de R$%.2f\n", aum, aum_sal);

	return 0;
}
