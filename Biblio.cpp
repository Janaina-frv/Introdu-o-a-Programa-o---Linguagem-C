#include <stdio.h>
int main(){

char nome[20];
float tipo;

printf("Informe o nome do livro: ");
scanf("%s", &nome);

printf("Informe o tipo de usu�rio: 1- professor, 2- aluno, 3- Sair.");
scanf("%f", &tipo);

		if (tipo==3){
			printf("Voce saiu do programa!");
		}else{if (tipo==1)
				printf("\nNome do livro: %s \nTipo de usu�rio: professor\nTotal de dias: 10", nome);
			else{if (tipo==2)
				printf("\nNome do livro: %s \nTipo de usu�rio: aluno\nTotal de dias: 3", nome);
				else
					printf("Op��o n�o existente");
		}}
		
		
}

