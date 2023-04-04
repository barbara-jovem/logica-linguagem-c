#include <stdio.h>

int main()
{		
	int dia, mes, ano;


	
	printf("Solicitamos sua data de nascimento\n");
	system("pause");
	system("cls");
		
	printf("Digite o dia: \n");
	scanf("%d", &dia);

	printf("Digite o mes: \n");
	scanf("%d", &mes);

	printf("Digite o ano: \n");
	scanf("%d", &ano);

	printf("A data informada foi %02d/%02d/%04d\n", dia, mes, ano);
	
	system("pause");
	
	
}
