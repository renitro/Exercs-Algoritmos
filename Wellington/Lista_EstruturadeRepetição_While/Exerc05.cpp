#include <stdio.h>
#include <locale.h>
// 5 - Fa�a um programa que leia v�rios inteiros positivos e mostre, no final, a soma dos n�meros pares e a soma dos n�meros �mpares. O programa para quando entrar um n�mero maior que 1000.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0, pares = 0, impares = 0;
	
	while (num <= 1000)
	{
		printf("Digite um n�mero: ");
		scanf("%i", &num);
		
		if (num %2 == 0 && num <= 1000)
			if(num > 0)
			pares = num+pares;
			
		if (num %2 != 0 && num <= 1000)
			if (num > 0)
			impares = num + impares;
	}
	
	printf("\n\nSoma dos pares: %i.", pares);
	printf("\nSoma dos �mpares: %i.", impares);
}

