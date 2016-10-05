#include <stdio.h>
#include <locale.h>
// 4) Desenvolva um programa que solicite dois números inteiros, mostre a soma destes números, e avise se a soma é maior, menor ou igual a 1000.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	
	printf("\nDigite o segundo número: ");
	scanf("%i", &num2);
	
	if ((num1+num2) < 1000)
	{
		printf("\n\nA soma dos números digitados é %i. A soma é menor que 1000.", (num1+num2));
	}
	else if ((num1+num2) > 1000)
	{
		printf("\n\nA soma dos números digitados é %i. A soma é maior que 1000.", (num1+num2));	
	}
	else
	{
		printf("\n\nA soma dos números digitados é %i. A soma é igual a 1000.", (num1+num2));
	}
	
}
