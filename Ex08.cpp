#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int num, iterator;
	printf("Insira o número que deseja ver a tabuada: ");
	scanf("%i", &num);
	for(iterator = 1; iterator <= 10; iterator++) {
		printf("\n%i X %i = %i", num, iterator, num * iterator);
	}
	return 0;
}
