/*Quest�o 4:

Utilizando vetores, crie um programa que leia o nome de um aluno, 4 notas e calcule a
m�dia aritm�tica.
Verifique a situa��o do aluno considerando:
- M�dia igual ou maior que 7,0: Aprovado.
- M�dia entre 5,0 e 6,9: Recupera��o.
- M�dia menor que 5,0: Reprovado.

Mostre os dados do aluno como: nome, suas 4 notas, m�dia e situa��o conforme
solicitado acima.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NOTAS 4

int main(){
	setlocale(LC_ALL, "");
	
	char nome[200];
	float notas[NOTAS];
	float soma = 0, media = 0;
	int i;
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	
	fflush(stdin);
	
	for(i = 0; i < NOTAS; i++){
		printf("Digite a sua %i� nota: ", i + 1);
		scanf("%f", &notas[i]);
		
		soma += notas[i];
	}

	printf("\n= = = Resultados = = = ");
	printf("\nNome do aluno: %s", nome);
	
	for(i = 0; i < NOTAS; i++){
		printf("\n%i� nota: %.1f", i + 1, notas[i])	;
	}
	
	media = soma / i;
	soma = 0;
	
	printf("\nM�dia do aluno: %.1f", media);
	printf("\nSitua��o do aluno:");
	
	if( media >=7){
		printf("APROVADO");
	}else if ( media >= 5 && media < 7){
		printf("RECUPERA��O");
	}else {
		printf("REPROVADO");
	}
	
	return 0;
}
