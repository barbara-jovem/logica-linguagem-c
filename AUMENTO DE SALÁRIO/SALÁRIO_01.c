#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	float sal, perc, aumento, novosal;

	printf("Informe o valor do salario: \n");
	scanf("%f", &sal);
	printf("Informe o percentual de aumento: \n");
	scanf("%f", &perc);
	
	aumento= perc/100 * sal;
	
	novosal= sal + aumento;
	
	printf("O valor do aumento do salario e de %.2f.\n", aumento);
	printf("O novo salario e de: %.2f.", novosal);
	
	system("pause");
 
	
}



