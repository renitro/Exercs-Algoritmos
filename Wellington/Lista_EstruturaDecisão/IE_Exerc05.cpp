#include <stdio.h>
#include <locale.h>
// IE 5) Ler um número e imprimir: maior que 20, igual a 20 ou menor que 20

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if (num > 20)
	{
		printf("\n\nMaior que 20!");
	}	
	else if (num < 20)
	{
		printf("\n\nMenor que 20!");
	}
	else
	{
		printf("\n\nIgual a 20!");
	}

}
	
