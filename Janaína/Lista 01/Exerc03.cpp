#include <stdio.h>
#include <locale.h>
// 3) Escreva um programa que leia dois valores inteiros distintos e informe qual � o maior. 

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &num1);
	
	printf("\nDigite o segundo n�mero: ");
	scanf("%i", &num2);
	
	if (num1 > num2)
	{
		printf("\n\nO n�mero %i � maior que o n�mero %i!", num1, num2);
	}
	else if (num2 > num1)
	{
		printf("\n\nO n�mero %i � maior que o n�mero %i!", num2, num1);
	}
	else
	{
		printf("\n\nOs n�meros digitados (%i e %i) s�o iguais!", num1, num2);
	}
}
