#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*	4 - Preencher um vetor com n�meros inteiros (8 unidades); solicitar um n�mero do
teclado. Pesquisar se esse n�mero existe no vetor. Se existir, imprimir em qual posi��o do
vetor. Se n�o existir,imprimir MSG que n�o existe. */



main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num[8], chute, verifica = 0;
	
	srand(time(NULL));
	
	for (int i = 0; i < 8; i++)
	{
	num[i] = rand() % 101;
	}
	
	printf("Digite um n�mero de 0 a 100: ");
	scanf("%i", &chute);
	
	for (int i = 0; i < 8; i++)
	{
		if (num[i] == chute)
		{
			printf("\nO n�mero %i est� na posi��o %i!", chute, (i+1));
			
			verifica++;
		}
		
	}
	
	if (verifica == 0)
	{
	printf("\nO n�mero %i n�o existe no vetor.", chute);

	}
	printf("\n\nVetor gerado: ");
	
	for(int i = 0; i < 8; i++)
	{
		printf("\n\t%i", num[i]);
	}
	
	
}

