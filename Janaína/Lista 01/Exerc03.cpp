#include <stdio.h>
#include <locale.h>
// 3) Escreva um programa que leia dois valores inteiros distintos e informe qual é o maior. 

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	
	printf("\nDigite o segundo número: ");
	scanf("%i", &num2);
	
	if (num1 > num2)
	{
		printf("\n\nO número %i é maior que o número %i!", num1, num2);
	}
	else if (num2 > num1)
	{
		printf("\n\nO número %i é maior que o número %i!", num2, num1);
	}
	else
	{
		printf("\n\nOs números digitados (%i e %i) são iguais!", num1, num2);
	}
}
