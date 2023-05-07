#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int quantRegular, quantBom = 0, idade, opiniao;
	float somaOtimo, quantOtimo;
	while(true) {
		printf("\nInsira a idade: ");
		scanf("%i", &idade);
		if(idade <= 0) {
			break;
		}
		
		printf("1 - Regular \n2 - Bom \n3 - Ótimo \nQual sua opinião sobre o filme: ");
		scanf("%i", &opiniao);
		
		switch(opiniao) {
			case 1: 
				quantRegular++;
			break;
			case 2:
				quantBom++;
			break;
			case 3:
				somaOtimo += idade;
				quantOtimo++;
			break;
			default:
				printf("\nValor invalido");
			break;
		}
	}
	
	printf("\nA média das idades das pessoas que responderam ótimo: %2.f \nA quantidade de pessoas que responderam regular: %i \nA quantidade de pessoas que responderam bom: %i", somaOtimo / quantOtimo, quantRegular, quantBom);
	return 0;
}
