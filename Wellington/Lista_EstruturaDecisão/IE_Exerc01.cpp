#include <stdio.h>
#include <locale.h>
// IE 1) Ler um n�mero e se for maior que 20 imprimir a metade desse n�mero.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	if (num > 20)
	{
		printf("\n\nMetade do n�mero: %i", (num/2));	
	}	
}
