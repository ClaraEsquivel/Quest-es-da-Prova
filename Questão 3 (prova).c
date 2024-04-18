/*Quest�o 3:
Crie um programa em C que solicite ao usu�rio:
- Nome
- Idade
- E-mail
- Telefone

Usando o switch-case, mostre o menu abaixo e utilizando fun��es 
mostre para o usu�rio os dados solicitados conforme a op��o
 desejada:

1 - Mostrar nome e idade;
2 - Mostrar nome e e-mail;
3 - Mostrar nome e telefone;
4 - Mostrar todas as informa��es;
0 - Sair do programa.

Caso o usu�rio informe um n�mero que n�o esteja no menu acima, 
siga os seguintes passo:
- Ser� exibida a mensagem: "Op��o incorreta, tente novamente."
- Limpe a tela e mostre o menu novamente para o usu�rio.

Para sair do programa, o usu�rio deve digitar o n�mero zero,
 caso contr�rio, o menu deve ser exibido novamente.*/
 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	char nome[200];
	int idade;
	char email[200], telefone[20];
	int opcao;
	
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	fflush(stdin);
	
	printf("Digite a sua idade: ");
	scanf("%i", &idade);
	
	printf("Digite seu email: ");
	scanf("%s", &email);
	fflush(stdin);
	
	printf("Digite o seu telefone: ");
	scanf("%s", &telefone);
	
	
	do{
		printf("\nC�digo \t Descri��o \n");
		printf("1 \t Nome e Idade \n");
		printf("2 \t Nome e Email \n");
		printf("3 \t Nome e Telefone \n");
		printf("4 \t Todas as Op��es \n");
		printf("0 \t Sair do Programa\n");
		printf("Digite a op��o desejada: ");
		scanf("%i", &opcao);
	
	switch(opcao){
		case 1:
			printf("\nNome: %s", nome);
			printf("\nIdade: %i", idade);
			break;
			
		case 2:
			printf("\nNome: %s", nome);
			printf("\nEmail: %s", email);
			break;
			
		case 3: 
			printf("\nNome: %s", nome);
			printf("\nTelefone: %s", telefone);
			break;
			
		case 4:
			printf("\nNome: %s", nome);
			printf("\nIdade: %i", idade);
			printf("\nEmail: %s", email);
			printf("\nTelefone: %s", telefone);
			break;
			
		case 0:
			printf("\nSair do Programa\n");
			break;
			
			
		default: 
			printf("Op��o inv�lida, tente novamente\n");
				
	}
	
}while(opcao != 0);
		
	return 0;
}

