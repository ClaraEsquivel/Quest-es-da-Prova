/*Quest�o 5:

Crie um programa que leia 5 n�meros inteiros, utilizando um la�o de repeti��o.

Ap�s solicitar os n�meros para o usu�rio, informe qual � o menor n�mero e o maior n�mero
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
		printf("Digite o %i� n�mero: ", i + 1);
		scanf("%i", &numero[i]);
	}


	for(i = 0; i < 5; i++){
		printf("\n%i� n�mero: %i", i + 1, numero[i]);
		
		if(numero[i] > maiorNumero){
		maiorNumero = numero[i];
		}
		if(numero[i] < menorNumero){
		menorNumero = numero[i];
		}
		
	}
	
	printf("\nMaior N�mero: %i", maiorNumero);
	printf("\nMenor N�mero: %i", menorNumero);
	
	return 0;
}
