#include <stdio.h>
#include <stdlib.h>

int main ()

{
int i, ant1, ant2, atual;

ant1 = 1;
ant2 = 0;


printf("S�rie de Fibonacci: \n");
printf("%d ", ant2);
printf("%d ", ant1);	

for(i=3; i<=8; i++){
	atual = ant1 + ant2;
	printf("%d ", atual);
	ant2 = ant1;
	ant1 = atual;
}

system("pause");
return 0;
}
