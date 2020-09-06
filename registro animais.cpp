/*Elabore um programa que leia vários registros de animais contendo os dados:
nome, raça, data de nascimento e sexo. Os registros devem ser lidos enquanto o
usuário desejar. O máximo de animais cadastrados é 50. Ao final, todos os registros
devem ser impressos.*/


#include <stdio.h>
#include <locale.h>

typedef struct animal
{
	char nome[50];
	char raca[50];
	char data[25];
	char sexo[15];
} animal;


int main()
{
	setlocale(LC_ALL, "Portuguese");
	
	animal anim[50];
	int op=1, i=0, j;
	
	printf("REGISTRO DE ANIMAIS\n\n");
	
		while ((op == 1) && (i<49))
		{
		
			printf("\nNome do animal: ");
			fflush(stdin);
			gets (anim[i].nome);
	
			printf("\nRaca do animal: ");
			fflush(stdin);
			gets (anim[i].raca);	
	
			printf("\nData de nascimento do animal: ");
			fflush(stdin);
			gets (anim[i].data);
			
			printf("\nSexo do animal: ");
			fflush(stdin);
			gets (anim[i].sexo);
			
			printf("\nDeseja continuar? 1-SIM ou 2-NÃO\n");
			scanf ("%d", &op);
			
			printf("\n\n");
			
			i++;
		}

    printf("\n\n\nImpressão...\n\n");
    
    	for (j=0; j<i; j++)
		{
    		printf("\nDados do animal\n");
    		printf("Nome: ");
    		puts(anim[j].nome);
    		printf("Raca: ");
    		puts(anim[j].raca);
    		printf("Data: ");
    		puts(anim[j].data);
    		printf("Sexo: ");
    		puts(anim[j].sexo);
    	}

}
