#include <stdio.h>
int main(){

char nome[30];
float  peso, alt, imc;

printf("Essa é uma calculadora de índice de massa corporal (imc) \nInforme seu nome: ");
scanf("%s", &nome);
printf("Informe seu peso em Kilo (kg): ");
scanf("%f", &peso);
printf("Informe sua altura em metros (m): ");
scanf("%f", &alt);

imc = (peso / (alt * alt));
printf("Seu imc e: %f\n\n", imc);


		if (imc<20){
			printf("%s, voce esta abaixo do peso!", nome);
		}else{
		
		if (imc>=20 & imc<25)
			printf("%s, seu peso esta normal!", nome);
		else{if (imc>=25 & imc<30)
			printf("%s, voce esta com excesso de peso!", nome);
			else{if (imc>=30 & imc<35)
					printf("%s, voce esta com obesidade!", nome);
				else{if (imc>=35)
					printf("%s, voce esta com obesidade orbida!", nome);
					else
						printf("Error");
		}}}}
		
		
}

