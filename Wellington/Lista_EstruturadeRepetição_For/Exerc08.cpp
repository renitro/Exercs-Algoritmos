#include <stdio.h>
#include <locale.h>
//8 - Fa�a um programa que leia um n�mero n e imprima se ele � primo ou n�o. (um n�mero primo tem apenas 2 divisores: 1 e ele mesmo! O n�mero 1 n�o � primo!!!)

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x, v = 0;
	
	printf("Digite um n�mero: ");
	scanf("%i", &x);
	
	for (int i = x; i >= 2; i--)
	{
		if (x % i == 0)
		v++;
	}
	
	if (v == 1)
	printf("\n\nO n�mero %i � primo!", x);
	else
	printf("\n\nO n�mero %i n�o � primo!", x);
}
