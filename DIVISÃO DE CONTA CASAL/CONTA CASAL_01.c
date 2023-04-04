#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	float salp1, salp2, saltotal, percp1, percp2, valconta, valp1, valp2;

	printf("Informe o valor do salario do(a) parceiro(a) 1: \n");
	scanf("%f", &salp1);
	printf("Informe o valor do salario do parceiro 2: \n");
	scanf("%f", &salp2);
	printf("Informe o valor da conta a ser dividida: \n");
	scanf("%f", &valconta);
	
	saltotal= salp1 + salp2;
	percp1= salp1 / saltotal;
	percp2= salp2/ saltotal;
	
	valp1= valconta * percp1;
	valp2= valconta * percp2;
	
	printf("O valor a ser pago pelo(a) parceiro(a) 1 e: %.2f \n", valp1);
	printf("O valor a ser pago pelo(a) parceiro(a) 2 e: %.2f \n", valp2);
	
	
	system("pause");
 
	

}



