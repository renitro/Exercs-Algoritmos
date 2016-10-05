#include <stdio.h>
#include <locale.h>
//1 - Faça um programa que mostre na tela todos os números de 1 a 50 e depois essa mesma lista invertida (50 a 1) usando laço for.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	for(int i = 1; i <= 50; i++)
	{
		printf("%i\n", i);		
	}
	
	printf("\n");
	
	for (int i = 50; i >=1; i--)
	{
		printf("%i\n", i);
	}
}
