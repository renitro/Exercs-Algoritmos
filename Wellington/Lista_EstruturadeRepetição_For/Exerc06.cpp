#include <stdio.h>
#include <locale.h>
//5 - Escreva um programa que apresenta os n�meros divisores de um n�mero

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	for(int i = 0; i<=10; i++)
	{
	
		for(int j = 0; j <=10; j++)
		{
		printf("%i * %i = %i\n", i, j, (i*j));	
		}
		printf("\n");
	}
}
