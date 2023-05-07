#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int iterator, num;
	int menorNum, soma10Pares, quantImpar, mediaNum20, quantNum20 = 0;
	
	for(iterator = 1; iterator <= 10; iterator++) {
		printf("\nInsira o %i° número: ", iterator);
		scanf("%i", &num);
		// Calculo do menor numero		
		if(iterator == 1) {
			menorNum = num;
		} else if(num < menorNum) {
			menorNum = num;
		}
		
		// soma dos numeros pares maiores que 10
		if(num % 2 == 0 && num > 10) {
			soma10Pares += num;
		}		
		
		// Quantidade de números ímpares 
		if(num % 2 == 1) {
			quantImpar++;
		}
		
		// Media dos numeros maiores que 20
		if(num > 20) {
			mediaNum20 += num;
			quantNum20++;
		}
		
	}
	
	printf("\nMenor número: %i \nSoma dos números pares e maiores que 10: %i \nQuantidade de números ímpares : %i \nMédia dos números maiores que 20: %i", menorNum, soma10Pares, quantImpar, mediaNum20 / quantNum20);
	
	return 0;
}
