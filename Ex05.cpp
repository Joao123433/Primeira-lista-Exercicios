#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int iterator, num, quantPrimos = 0, iteratorPrimo, primo, somaImpar;
	float somaPares, quantPares;
	for(iterator = 1; iterator <= 10; iterator++) {
		printf("\nInsira o %i° numero: ", iterator);
		scanf("%i", &num);
		
		for(iteratorPrimo = 1; iteratorPrimo <= num; iteratorPrimo++) {
			if(num % iteratorPrimo == 0) {
				primo++;
			}
		}
		if(primo == 2) {
			quantPrimos++;
		}
		primo = 0;
		
		
		if(num % 2 == 0) {
			somaPares += num;
			quantPares++;
		} else{
			somaImpar += num;
		}
	}
	
	printf("\nA quantidade de números primos: %i \nA soma dos números ímpares: %i \nA média dos pares: %.2f", quantPrimos, somaImpar, somaPares / quantPares);
	return 0;
}
