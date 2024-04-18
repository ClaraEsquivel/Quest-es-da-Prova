/*Questão 4:

Utilizando vetores, crie um programa que leia o nome de um aluno, 4 notas e calcule a
média aritmética.
Verifique a situação do aluno considerando:
- Média igual ou maior que 7,0: Aprovado.
- Média entre 5,0 e 6,9: Recuperação.
- Média menor que 5,0: Reprovado.

Mostre os dados do aluno como: nome, suas 4 notas, média e situação conforme
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
		printf("Digite a sua %iª nota: ", i + 1);
		scanf("%f", &notas[i]);
		
		soma += notas[i];
	}

	printf("\n= = = Resultados = = = ");
	printf("\nNome do aluno: %s", nome);
	
	for(i = 0; i < NOTAS; i++){
		printf("\n%iª nota: %.1f", i + 1, notas[i])	;
	}
	
	media = soma / i;
	soma = 0;
	
	printf("\nMédia do aluno: %.1f", media);
	printf("\nSituação do aluno:");
	
	if( media >=7){
		printf("APROVADO");
	}else if ( media >= 5 && media < 7){
		printf("RECUPERAÇÃO");
	}else {
		printf("REPROVADO");
	}
	
	return 0;
}
