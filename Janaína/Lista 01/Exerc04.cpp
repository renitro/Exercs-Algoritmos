#include <stdio.h>
#include <locale.h>
// 4) Desenvolva um programa que solicite dois n�meros inteiros, mostre a soma destes n�meros, e avise se a soma � maior, menor ou igual a 1000.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &num1);
	
	printf("\nDigite o segundo n�mero: ");
	scanf("%i", &num2);
	
	if ((num1+num2) < 1000)
	{
		printf("\n\nA soma dos n�meros digitados � %i. A soma � menor que 1000.", (num1+num2));
	}
	else if ((num1+num2) > 1000)
	{
		printf("\n\nA soma dos n�meros digitados � %i. A soma � maior que 1000.", (num1+num2));	
	}
	else
	{
		printf("\n\nA soma dos n�meros digitados � %i. A soma � igual a 1000.", (num1+num2));
	}
	
}
