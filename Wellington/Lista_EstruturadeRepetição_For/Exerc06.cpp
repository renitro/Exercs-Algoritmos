#include <stdio.h>
#include <locale.h>
//6 - Faça um programa em C para exibir a tabuada de 0 a 10

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
