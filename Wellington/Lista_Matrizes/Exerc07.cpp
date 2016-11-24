#include <stdio.h>
#include <locale.h>
/*7 - Leia uma matriz 6 x 6 e atribuir o valor 0 para os 
valores negativos encontrados fora das diagonais principal e secundaria.*/

main()
{
	setlocale(LC_ALL, "");
	int matriz[6][6];
	
	for (int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			printf("Digite o valor da posição %i,%i da matriz: ", i+1, j+1);
			scanf("%i", &matriz[i][j]);
			
			if (i != j)
				if (i+j != 5)
					if (matriz[i][j] < 0)
						matriz[i][j] = 0;
									
		}
	}
	
	printf("\n\nMatriz com 0 no lugar de negativos fora das diagonais: \n");
	
	for (int i = 0; i < 6; i++)
	{
		for(int j = 0; j < 6; j++)
		{
			printf("%i ", matriz[i][j]);
		}
		printf("\n");
	}
}

