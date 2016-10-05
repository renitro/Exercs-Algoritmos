#include <stdio.h>
#include <locale.h>
// 1) Faça um programa que receba um número e mostre uma mensagem caso este número seja maior que 10. 

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;

	printf("Digite um número: ");
	scanf("%i", &num);
	
	if (num >10)
	{
		printf("\n\nO número é maior que 10!");
	}
	
}
