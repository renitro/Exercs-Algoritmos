#include <stdio.h>
#include <locale.h>
// 5) Fa�a um programa que receba um n�mero e diga se este n�mero est� no intervalo entre 100 e 200.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	if ((num > 99) && (num < 201))
	{
		printf("\n\nO n�mero digitado est� no intervalo entre 100 e 200!");
	}
	else
	{
		printf("\n\nO n�mero digitado n�o est� no intervalo entre 100 e 200!");
	}
	
}
