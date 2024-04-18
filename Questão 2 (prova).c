/*Quest�o 2

Construa um algoritmo que calcule a m�dia aritm�tica de v�rios
n�meros inteiros positivos, inseridos pelo usu�rio.

O final da leitura acontecer� quando for lido um n�mero negativo.

Mostre a m�dia aritm�tica dos n�meros informados pelo usu�rio.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int numero; 
	float soma = 0, media = 0, contador;
	
	printf("Insira um n�mero inteiro positivo:");
	
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
	 	printf("M�dia: %.1f", media);
	 } else{
	 	printf("Nenhum n�mero inteiro foi inserido.");
	 }
	
	
	
	return 0;
}
