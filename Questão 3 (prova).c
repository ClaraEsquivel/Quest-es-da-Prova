/*Questão 3:
Crie um programa em C que solicite ao usuário:
- Nome
- Idade
- E-mail
- Telefone

Usando o switch-case, mostre o menu abaixo e utilizando funções 
mostre para o usuário os dados solicitados conforme a opção
 desejada:

1 - Mostrar nome e idade;
2 - Mostrar nome e e-mail;
3 - Mostrar nome e telefone;
4 - Mostrar todas as informações;
0 - Sair do programa.

Caso o usuário informe um número que não esteja no menu acima, 
siga os seguintes passo:
- Será exibida a mensagem: "Opção incorreta, tente novamente."
- Limpe a tela e mostre o menu novamente para o usuário.

Para sair do programa, o usuário deve digitar o número zero,
 caso contrário, o menu deve ser exibido novamente.*/
 
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
		printf("\nCódigo \t Descrição \n");
		printf("1 \t Nome e Idade \n");
		printf("2 \t Nome e Email \n");
		printf("3 \t Nome e Telefone \n");
		printf("4 \t Todas as Opções \n");
		printf("0 \t Sair do Programa\n");
		printf("Digite a opção desejada: ");
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
			printf("Opção inválida, tente novamente\n");
				
	}
	
}while(opcao != 0);
		
	return 0;
}

