#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*	4 - Preencher um vetor com números inteiros (8 unidades); solicitar um número do
teclado. Pesquisar se esse número existe no vetor. Se existir, imprimir em qual posição do
vetor. Se não existir,imprimir MSG que não existe. */



main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num[8], chute, verifica = 0;
	
	srand(time(NULL));
	
	for (int i = 0; i < 8; i++)
	{
	num[i] = rand() % 101;
	}
	
	printf("Digite um número de 0 a 100: ");
	scanf("%i", &chute);
	
	for (int i = 0; i < 8; i++)
	{
		if (num[i] == chute)
		{
			printf("\nO número %i está na posição %i!", chute, (i+1));
			
			verifica++;
		}
		
	}
	
	if (verifica == 0)
	{
	printf("\nO número %i não existe no vetor.", chute);

	}
	printf("\n\nVetor gerado: ");
	
	for(int i = 0; i < 8; i++)
	{
		printf("\n\t%i", num[i]);
	}
	
	
}

