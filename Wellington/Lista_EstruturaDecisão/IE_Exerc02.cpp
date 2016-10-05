#include <stdio.h>
#include <locale.h>
// IE 2) Ler 2 números inteiros e soma-los. Se a soma for maior que 10, mostrar o resultado da soma.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%i", &num2);
	
	if ((num1+num2) > 10)
	{
		printf("\n\nSoma maior que 10. Resultado: %i.", (num1+num2));
	}
	else
	{
		printf("\n\nSoma menor que 10. Sem resultados pra você!");
	}
	
}
