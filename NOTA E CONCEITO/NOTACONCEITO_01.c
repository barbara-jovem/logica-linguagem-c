#include <stdio.h>
#include <stdlib.h>

int main ()
{


float notatrab, notaaval, notaexame, somanotas, medianotas;

printf("Insira a nota referente ao Trabalho de Laboratorio: \n");
scanf("%f", &notatrab);
printf("Insira a nota referente a Avaliacao Semestral: \n");
scanf("%f", &notaaval);
printf("Insira a nota referente ao Exame final: \n");
scanf("%f", &notaexame);

somanotas = (notatrab * 2) + (notaaval * 3) + (notaexame * 5);
medianotas = somanotas/10;

printf("A media ponderada das notas foi %.2f\n", medianotas);


	if (medianotas >8 && medianotas <=10)
	{
	printf("Excelente, o conceito obtido foi A\n\n");}
	if (medianotas >7 && medianotas <=8)
	{
	printf("Parabens, o conceito obtido foi B\n\n");}	
	if (medianotas >6 && medianotas <=7)
	{
	printf("Muito Bem, o conceito obtido foi C\n\n");}
	if (medianotas >5 && medianotas <=6)
	{
	printf("Tente Novamente, o conceito obtido foi D\n\n");}
	if (medianotas >0 && medianotas <=5)
	{
	printf("Estude Mais, o conceito obtido foi E\n\n");}
	
	system("pause");
	
	return 0;

	
	
}
