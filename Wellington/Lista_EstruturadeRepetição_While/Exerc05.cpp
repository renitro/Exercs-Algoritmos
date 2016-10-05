#include <stdio.h>
#include <locale.h>
// 5 - Faça um programa que leia vários inteiros positivos e mostre, no final, a soma dos números pares e a soma dos números ímpares. O programa para quando entrar um número maior que 1000.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0, pares = 0, impares = 0;
	
	while (num <= 1000)
	{
		printf("Digite um número: ");
		scanf("%i", &num);
		
		if (num %2 == 0 && num <= 1000)
			if(num > 0)
			pares = num+pares;
			
		if (num %2 != 0 && num <= 1000)
			if (num > 0)
			impares = num + impares;
	}
	
	printf("\n\nSoma dos pares: %i.", pares);
	printf("\nSoma dos ímpares: %i.", impares);
}

