/*Quest�o 1:

Crie um programa em C que leia 6 n�meros inteiros em
um vetor e, utilizando um la�o de repeti��o, informe:
- Os n�meros inseridos pelo usu�rio;
- Quantos n�meros s�o pares;
- Quantos n�meros s�o �mpares.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL,"");
	
	int pares = 0, impares = 0, numeros[6];
	int i;
	
	for(i = 0; i < 6; i++){
		printf("Digite o %d� n�mero: ", i + 1);
		scanf("%i", &numeros[i]);
		
			if(numeros[i]  %2 == 0){
				pares++;
			}else{
				impares++;
			}
	}
	
	for(i = 0; i < 6; i++){
		printf("\n%d� n�mero: %i", i + 1, numeros[i]);
	}
	
	printf("\nPares: %i", pares);
	printf("\n�mpares: %i ", impares);
	
	
	return 0;
}
