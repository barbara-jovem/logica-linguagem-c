#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int opcao; 
	float n1, n2, soma, sub, mult, div;
	
	printf("Digite primeiro o maior numero que deseja utilizar: ");
	scanf("%f", &n1);
	
	printf("Digite agora o menor numero que deseja utilizar: ");
	scanf("%f", &n2);
	
	system("cls");
	
	printf("Escolha o tipo de operacao que deseja realizar, entre as opcoes abaixo:\n");
	printf("Digite 1 para somar\n");
	printf("Digite 2 para subtrair\n");
	printf("Digite 3 para multiplicar\n");
	printf("Digite 4 para dividir\n");
	
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao)
	{
		case 1:
			soma = n1 + n2;
			printf("A soma dos dois numeros = %.2f\n", soma);
			system("pause");
			break;		
		case 2:
			sub = n1 - n2;
			printf("A subtracao dos dois numeros = %.2f\n", sub);	
			system("pause");
			break;		
		case 3:
			mult = n1 * n2;
			printf("A multiplicacao dos dois numeros = %.2f\n", mult);
			system("pause");
			break;		
		case 4:
				if(n2 == 0){
					printf("Divisao por zero.\n");}			
				else {
				div= n1 / n2; 
				printf("A divisao dos dois numeros = %.2f\n", div);}
				system("pause");
				break; 			
		default:
			printf("Opcao nao existente\n");
			system("pause");
			break;
		}
			
	}
		

