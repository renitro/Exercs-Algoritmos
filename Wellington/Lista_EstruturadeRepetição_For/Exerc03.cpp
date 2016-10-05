#include <stdio.h>
#include <locale.h>
//3 - Escreva um programa em C que lê 15 valores reais, encontra o maior e o menor deles e mostra o resultado.

main()
{
	int x[15], maior, menor;
	for(int i = 0; i < 15; i++)
	{
		printf("Digite o %iª valor: ", (i+1));
		scanf("%i", &x[i]);
			
	}
	maior = x[0];
	menor = x[0];
	
	for (int i = 0; i < 15; i++)
	{
		if (x[i] > maior)
		maior = x[i];
		
		if (x[i] < menor)
		menor = x[i];
	}
		
		printf("\n\nMaior valor: %i.\nMenor valor: %i.", maior, menor);
}
