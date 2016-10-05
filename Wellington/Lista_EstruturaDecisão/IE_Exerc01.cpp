#include <stdio.h>
#include <locale.h>
// IE 1) Ler um número e se for maior que 20 imprimir a metade desse número.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if (num > 20)
	{
		printf("\n\nMetade do número: %i", (num/2));	
	}	
}
