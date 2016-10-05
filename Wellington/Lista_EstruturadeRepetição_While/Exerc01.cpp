#include <stdio.h>
#include <locale.h>
// 1 - Faça um programa que receba valores, mostrando na tela, e calcula a soma e a média desses números. Obs: O programa encerra quando receber um número negativo.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num = 0, cont = 0, soma = 0;
	
	while (num >= 0)
	{
		printf("Digite um número: ");
		scanf("%f", &num);
		
		if (num >= 0)
		{
			soma = num + soma;
			cont++;
		}
	}
	
	printf("\n\nSoma dos números digitados: %.2f", soma);
	printf("\nMédia dos números digitados: %.2f", (soma/cont));
}
