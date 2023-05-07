#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float idade, quantPessoas, mediaIdade;
	while(true) {
		printf("\nInsira uma idade: ");
		scanf("%f", &idade);
		if(idade <= 0) {
			break;
		}
		quantPessoas++;
		mediaIdade += idade;
	}
	
	printf("A media das idades: %.2f anos", mediaIdade / quantPessoas);
	return 0;
}
