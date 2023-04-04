#include <stdio.h>
#include <stdlib.h>

int main ()
{


int segundos, minutos, horas;

printf ("Insira o tempo cronometrado em segundos: ");
scanf ("%d", &segundos);

horas= segundos / 3600;
printf("A quantidade de horas e de: %d \n", horas);

segundos= segundos - (3600 * horas); //o que restou dos segundos depois de extrair o numero de horas

minutos= segundos / 60;
printf("A quantidade de minutos e de: %d \n", minutos);

segundos= segundos - (60*minutos);
printf("A quantidade de segundos e de: %d \n", segundos);

system("pause");
}
