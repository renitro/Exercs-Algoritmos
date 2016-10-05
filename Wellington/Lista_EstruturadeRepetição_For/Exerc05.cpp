#include <stdio.h>
#include <locale.h>
//5 - Escreva um programa que apresenta os números divisores de um número

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	printf("\n\nDivisores de %i: ", num);
	
	for(int i = num; i >= 1; i--)
	{
		if ((num % i == 0) && (i !=1))
		printf("%i, ",i);
		if (i == 1)
		printf("%i.", i);
		
	}
		
}
