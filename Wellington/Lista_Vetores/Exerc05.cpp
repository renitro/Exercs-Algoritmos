#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*5 - Preencher um vetor de 8 elementos inteiros. Mostrar o vetor e informar quantos
números são maior que 30, Somar estes números.*/


main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num[8], qtd = 0, soma = 0;
	
	srand(time(NULL));
	
	printf("Vetor gerado: \n");
	
	for (int i = 0; i < 8; i++)
	{
	num[i] = rand() % 101;
	printf("\n\t%i", num[i]);
	
		if (num[i] > 30)
		{
		qtd++;
		soma = soma + num[i];
		}
	}
	
	
	printf("\n\nQuantidade de números maiores que 30: %i", qtd);
	printf("\n\nSoma dos números maiores que 30: %i", soma);
	
}
