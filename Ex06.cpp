#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num, iterator, iteratorFatorial, fatorial;
	
	for(iterator = 1; iterator <= 10; iterator++) {
		printf("\n\nInsira um número pra ver o fatorial dele: ");
		scanf("%i", &num);
		fatorial = 1;
		for(iteratorFatorial = 1; iteratorFatorial <= num; iteratorFatorial++) {
			fatorial *= iteratorFatorial;
		}
		printf("Fatorial do %i: %i", num, fatorial);
	}
	return 0;
}
