#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int salario, iterator, maiorSalario, menorSalario, quantSalario3;
	for(iterator = 1; iterator <= 10; iterator++) {
		printf("\nInsira o salario: ");
		scanf("%i", &salario);
		
		if(salario > maiorSalario) {
			maiorSalario = salario;
		}
		
		if(iterator == 1) {
			menorSalario = salario;
		} else if(salario < menorSalario) {
			menorSalario = salario;
		}
		
		if(salario > 3000) {
			quantSalario3++;
		}
	}
	
	printf("\nO maior sal�rio: %i \nO menor sal�rio: %i \nA quantidade de pessoas com sal�rio superior a 3 mil reais: %i", maiorSalario, menorSalario, quantSalario3);
	return 0;
}
