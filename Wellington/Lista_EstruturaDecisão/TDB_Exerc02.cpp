#include <stdio.h>
#include <locale.h>
// TDB 2) Informar tr�s n�meros inteiros e imprimir a m�dia.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &num1);
	
	printf("\nDigite o segundo n�mero: ");
	scanf("%i", &num2);
	
	printf("\nDigite o terceiro n�mero: ");
	scanf("%i", &num3);
	
	printf("\n\nM�dia desses n�meros: %i", (num1+num2+num3)/3);
}
	
