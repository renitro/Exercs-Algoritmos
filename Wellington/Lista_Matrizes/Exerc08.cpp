#include <stdio.h>
#include <locale.h>
/*8 - Fa�a um algoritmo que calcule a m�dia dos elementos 
da diagonal principal de uma matriz 10 X 10 de n�meros.*/

main()
{
	setlocale(LC_ALL, "");
	float matriz[10][10], media = 0;
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("Digite o valor da posi��o %i,%i da matriz: ", i+1, j+1);
			scanf("%f", &matriz[i][j]);
			if (i == j)
			media = media+matriz[i][j];
		}
	}
	
	printf("\n\nM�dia dos n�meros da diagonal principal: %.2f", media/10);
}

