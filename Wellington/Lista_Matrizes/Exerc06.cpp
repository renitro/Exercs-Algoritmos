#include <stdio.h>
#include <locale.h>
/*6 - Leia uma matriz 8x 8 e escreva o maior elemento da diagonal 
principal e a soma dos elementos da diagonal secundaria.*/

main()
{
	setlocale(LC_ALL, "");
	int matriz[8][8], maior, soma = 0;
	
	for (int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			printf("Digite o valor da posição %i,%i da matriz: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	maior = matriz[1][1];
	
	for (int i = 0; i < 8; i++)
	{
		for(int j = 0; j < 8; j++)
		{
			if (i==j)
				if (matriz[i][j] > maior)
				maior = matriz[i][j];
				
				if (i+j == 7)
				soma = soma+matriz[i][j];
		}
	}
	printf("\n\nMaior elemento da diagonal principal: %i", maior);
	printf("\nSoma dos elementos da diagonal secundária: %i", soma);
	
	
	
	
}
