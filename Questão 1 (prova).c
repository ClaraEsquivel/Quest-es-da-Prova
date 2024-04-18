/*Questão 1:

Crie um programa em C que leia 6 números inteiros em
um vetor e, utilizando um laço de repetição, informe:
- Os números inseridos pelo usuário;
- Quantos números são pares;
- Quantos números são ímpares.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL,"");
	
	int pares = 0, impares = 0, numeros[6];
	int i;
	
	for(i = 0; i < 6; i++){
		printf("Digite o %dº número: ", i + 1);
		scanf("%i", &numeros[i]);
		
			if(numeros[i]  %2 == 0){
				pares++;
			}else{
				impares++;
			}
	}
	
	for(i = 0; i < 6; i++){
		printf("\n%dº número: %i", i + 1, numeros[i]);
	}
	
	printf("\nPares: %i", pares);
	printf("\nÍmpares: %i ", impares);
	
	
	return 0;
}
