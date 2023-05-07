#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int idade, peso, iterator, mediaIdade, quantPessoas, maiorPeso, mediaIdade3040, quantIdade3040, quantSuperior70;
	for(iterator = 1; iterator <= 10; iterator++) {
		printf("\nInsira a idade: ");
		scanf("%i", &idade);
		printf("Insira o peso: ");
		scanf("%i", &peso);
		
		// Calculo das media das idades
		mediaIdade += idade;
		quantPessoas++;
		
		// O maior peso
		if(peso > maiorPeso) {
			maiorPeso = peso;
		}
		
		// A média das idades das pessoas com idade entre 30 e 40 anos
		if(idade >= 30 && idade <= 40) {
			mediaIdade3040 += idade;
			quantIdade3040++;
		}	
		
		// A quantidade de pessoas com peso superior a 70 quilos
		if(peso > 70) {
			quantSuperior70++;
		}
	}
	
	printf("\nA média das idades: %i \nO maior peso: %i \nA média das idades das pessoas com idade entre 30 e 40 anos: %i \nA quantidade de pessoas com peso superior a 70 quilos: %i", mediaIdade / quantPessoas, maiorPeso, mediaIdade3040 / quantIdade3040, quantSuperior70);
	return 0;
}
