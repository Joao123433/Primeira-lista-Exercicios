#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	int iterator, numUsuario, iteratorPrimo, numPrimo, somaPrimos;
	float somaMultiplos3, quantMultiplos3  = 0;
	
	for(iterator = 1; iterator <= 10; iterator++) {
		printf("\nInsira o %i° numero: ", iterator);
		scanf("%i", &numUsuario);
		
//		Codigo que verifica se o numero e primo
		for(iteratorPrimo = 1; iteratorPrimo <= numUsuario; iteratorPrimo++) {
			if(numUsuario % iteratorPrimo == 0) {
				numPrimo++;
			}
		}
		if(numPrimo == 2) {
			somaPrimos += numUsuario;
		}
		numPrimo = 0;
		
//		Codigo que verifica se o numero e mulitplode 3 e maior que 10
		if(numUsuario % 3 == 0 && numUsuario > 10) {
			somaMultiplos3 += numUsuario;
			quantMultiplos3++;
		}
	}
	
	
	printf("\nA soma dos números primos: %i \nA média dos números múltiplos de 3 que são maiores que 10: %.2f", somaPrimos, somaMultiplos3 / quantMultiplos3);
	return 0;
}
