#include <stdio.h>
#include <locale.h>
//4 - Escreva um programa que apresenta o Fatorial de um número. Ex: Fat de 5 = 5X4X3X2X1 = 120

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, fat = 1;
	
	printf("Digite um número: ");
	scanf("%d", &num);
		
	printf("\n\n%i!: ", num);
	
	for (int i = num; i > 0; i--)
	{
		if (i == 1)
		printf("%i", i);
		else
		printf("%i * ", i);
		
		fat = fat * i;
	}
	printf(" = %i", fat);
}
