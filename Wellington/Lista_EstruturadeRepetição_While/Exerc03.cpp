#include <stdio.h>
#include <locale.h>
// 3 - Faça um programa que receba valores, mostrando na tela, no final imprima o maior e o menor desses números. Obs: O programa encerra quando receber um número negativo.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior, menor;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	maior = num;
	menor = num;
	
	while (num >=0)
	{
		printf("Digite um número: ");
		scanf("%i", &num);
		
		if (maior < num && num >= 0)
		maior = num;
		
		if (menor > num && num >=0)
		menor = num;
	}
	
	printf("\n\nMaior número digitado: %i", maior);
	printf("\nMenor número digitado: %i", menor);
	
}
