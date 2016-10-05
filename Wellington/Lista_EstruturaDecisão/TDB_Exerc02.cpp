#include <stdio.h>
#include <locale.h>
// TDB 2) Informar três números inteiros e imprimir a média.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	
	printf("\nDigite o segundo número: ");
	scanf("%i", &num2);
	
	printf("\nDigite o terceiro número: ");
	scanf("%i", &num3);
	
	printf("\n\nMédia desses números: %i", (num1+num2+num3)/3);
}
	
