#include <stdio.h>
#include <stdlib.h>

int main ()
{

int primnum, segnum;

	printf("Escreva o primeiro numero: \n");
	scanf ("%d", &primnum);

	printf("Escreva o segundo numero: \n");
	scanf ("%d", &segnum);

		if(primnum > segnum)
		{
		printf("O maior numero e o %d \n", primnum); 
		}

		if(segnum > primnum)
		{
		printf("O maior numero e o %d \n", segnum); 
	    }
		
		if(primnum == segnum)
		{
		printf("Os dois numeros sao iguais \n\n");
	    }
		
		system("pause");
		
		
	}


