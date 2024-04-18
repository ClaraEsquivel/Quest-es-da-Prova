/*Questão 5:

Crie um programa que leia 5 números inteiros, utilizando um laço de repetição.

Após solicitar os números para o usuário, informe qual é o menor número e o maior número
informado.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	
	int maiorNumero = 0, menorNumero = 999;
	int numero[5];
	int i;
	
	for(i = 0; i < 5; i++){
		printf("Digite o %iº número: ", i + 1);
		scanf("%i", &numero[i]);
	}


	for(i = 0; i < 5; i++){
		printf("\n%iº número: %i", i + 1, numero[i]);
		
		if(numero[i] > maiorNumero){
		maiorNumero = numero[i];
		}
		if(numero[i] < menorNumero){
		menorNumero = numero[i];
		}
		
	}
	
	printf("\nMaior Número: %i", maiorNumero);
	printf("\nMenor Número: %i", menorNumero);
	
	return 0;
}
