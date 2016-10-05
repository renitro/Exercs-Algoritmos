#include <stdio.h>
#include <locale.h>
//8 - Faça um programa que leia um número n e imprima se ele é primo ou não. (um número primo tem apenas 2 divisores: 1 e ele mesmo! O número 1 não é primo!!!)

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int x, v = 0;
	
	printf("Digite um número: ");
	scanf("%i", &x);
	
	for (int i = x; i >= 2; i--)
	{
		if (x % i == 0)
		v++;
	}
	
	if (v == 1)
	printf("\n\nO número %i é primo!", x);
	else
	printf("\n\nO número %i não é primo!", x);
}
