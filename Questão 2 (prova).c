/*Questão 2

Construa um algoritmo que calcule a média aritmética de vários
números inteiros positivos, inseridos pelo usuário.

O final da leitura acontecerá quando for lido um número negativo.

Mostre a média aritmética dos números informados pelo usuário.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int numero; 
	float soma = 0, media = 0, contador;
	
	printf("Insira um número inteiro positivo:");
	
	while(scanf("%i", &numero) != 0){
		if(numero > 0){
			contador++;
			soma += numero;
		}else { 
			break;
		}
	}
	 if(contador > 0){
	 	media = soma / contador;
	 	printf("Média: %.1f", media);
	 } else{
	 	printf("Nenhum número inteiro foi inserido.");
	 }
	
	
	
	return 0;
}
