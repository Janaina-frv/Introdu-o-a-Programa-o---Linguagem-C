#include <stdio.h>
int main(){

float  peso, planeta;

printf("Essa é uma calculadora de peso relativo por planeta\nInforme seu peso em Kilo (kg): ");
scanf("%f", &peso);
printf("Escolha em que planeta: 1- Mercúrio, 2- Vênus, 3- Marte, 4- Júpiter, 5- Saturno, 6- Urano, 7- Netuno, 8- Plutão, 9- Sair");
scanf("%f", &planeta);

		if (planeta==9){
			printf("Voce saiu da calculadora!");
		}else{		
		if (planeta==1)
			printf("Seu peso no planeta Mercúrio é: %.2f kg", peso*0.37);
		else{if (planeta==2)
			printf("Seu peso no planeta Vênus é: %.2f kg", peso*0.88);
			else{if (planeta==3)
			printf("Seu peso no planeta Marte é: %.2f kg", peso*0.38);
				else{if (planeta==4)
			printf("Seu peso no planeta Júpiter é: %.2f kg", peso*2.64);
					else{if (planeta==5)
			printf("Seu peso no planeta Saturno é: %.2f kg", peso*1.15);
					else{if (planeta==6)
			printf("Seu peso no planeta Urano é: %.2f kg", peso*1.17);
					else{if (planeta==7)
			printf("Seu peso no planeta Netuno é: %.2f kg", peso*1.18);
					else{if (planeta==8)
			printf("Seu peso no planeta Plutão é: %.2f kg", peso*0.11);
					else
						printf("Error");
		}}}}}}}}
		
		
}

