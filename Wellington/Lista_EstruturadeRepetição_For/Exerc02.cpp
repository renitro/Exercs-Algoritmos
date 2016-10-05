#include <stdio.h>
#include <locale.h>
//2 - Faça um programa que calcule a soma dos primeiros 50 números pares

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int soma = 0;
	
	for(int i = 1;i <= 100; i++)
	{
		if (i%2 == 0)
		soma = i + soma;
	}
	
	printf("Soma dos 50 primeiros pares: %i", soma);
	
}
