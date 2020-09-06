#include <stdio.h>
int main(){

int i, num, fat;

fat=1;

printf("Essa e uma calculadora de numero fatorial. Indique um numero positivo a ser calculado:");
scanf("%d", &num);
 
for(i=1; i<=num; i++){
 fat = fat * i;
 }

printf ("O fatorial desse numero e: %d", fat);
}
