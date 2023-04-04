#include <stdio.h>
#include <stdlib.h>

float calclucrodist (float precofab, float percdist){
	return precofab * percdist/100;
}

float calcimp (float precofab, float percimp){
	return precofab * percimp/100;
}

float calcvalorfin (float precofab, float lucrodist, float imposto){
	return precofab + lucrodist + imposto;
}

int main ()
{
               //entradas                 //saidas
float precofab, percdist, percimp, lucrodist, imposto, valorfin;

printf("Insira o preco de fabrica: \n");
scanf("%f", &precofab);

printf("Insira o percentual de lucro do distribuidor: \n");
scanf("%f", &percdist);

printf("Insira o percentual de impostos aplicados: \n");
scanf("%f", &percimp);

lucrodist = calclucrodist(precofab, percimp);
imposto = calcimp(precofab, percimp);
valorfin = calcvalorfin(precofab, lucrodist, imposto);

printf("Valor do lucro do distribuidor: %.2f\n", lucrodist);
printf("Valor do imposto aplicado: %.2f\n", imposto);
printf("Valor final do carro: %.2f\n", valorfin);

	return 0;
}
