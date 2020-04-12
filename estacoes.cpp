#include <stdio.h>
int main(){

float mes;

printf("Quer saber em qual estação estamos por mês\nInforme o mês desejado no formato MM: ");
scanf("%f", &mes);


		if (mes==1 || mes==2 || mes==3){
			printf("A estacao e de Verao!");
		}else{		
		if (mes==4 || mes==5 || mes==6)
			printf("A estacao e de Outono!");
		else{if (mes==7 || mes==8 || mes==9)
			printf("A estacao e de Inverno!");
			else{if (mes== 10 || mes==11 || mes==12)
			printf("A estacao e de Primavera!");
				else
						printf("Error");
		}}}		
		
}

