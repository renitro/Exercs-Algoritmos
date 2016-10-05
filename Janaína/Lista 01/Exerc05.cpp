#include <stdio.h>
#include <locale.h>
// 5) Faça um programa que receba um número e diga se este número está no intervalo entre 100 e 200.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if ((num > 99) && (num < 201))
	{
		printf("\n\nO número digitado está no intervalo entre 100 e 200!");
	}
	else
	{
		printf("\n\nO número digitado não está no intervalo entre 100 e 200!");
	}
	
}
