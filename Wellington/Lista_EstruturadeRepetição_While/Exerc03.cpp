#include <stdio.h>
#include <locale.h>
// 3 - Fa�a um programa que receba valores, mostrando na tela, no final imprima o maior e o menor desses n�meros. Obs: O programa encerra quando receber um n�mero negativo.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num, maior, menor;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	maior = num;
	menor = num;
	
	while (num >=0)
	{
		printf("Digite um n�mero: ");
		scanf("%i", &num);
		
		if (maior < num && num >= 0)
		maior = num;
		
		if (menor > num && num >=0)
		menor = num;
	}
	
	printf("\n\nMaior n�mero digitado: %i", maior);
	printf("\nMenor n�mero digitado: %i", menor);
	
}
