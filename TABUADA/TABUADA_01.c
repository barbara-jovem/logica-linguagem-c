#include <stdio.h>
#include <stdlib.h>

int main (){

	int i, mult, result;
	
	printf("Digite o numero que deseja calcular a tabuada\n");
	scanf ("%d", &mult);
	
	system("cls");
	
	for (i=1; i<=10; i++){
		result = mult * i;
		printf("%d x %d = %d\n", mult, i, result);
	}
	

}
