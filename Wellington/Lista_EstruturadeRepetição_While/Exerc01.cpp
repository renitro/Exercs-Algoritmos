#include <stdio.h>
#include <locale.h>
// 1 - Fa�a um programa que receba valores, mostrando na tela, e calcula a soma e a m�dia desses n�meros. Obs: O programa encerra quando receber um n�mero negativo.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num = 0, cont = 0, soma = 0;
	
	while (num >= 0)
	{
		printf("Digite um n�mero: ");
		scanf("%f", &num);
		
		if (num >= 0)
		{
			soma = num + soma;
			cont++;
		}
	}
	
	printf("\n\nSoma dos n�meros digitados: %.2f", soma);
	printf("\nM�dia dos n�meros digitados: %.2f", (soma/cont));
}
