#include <stdio.h>
#include <locale.h>
// 1) Fa�a um programa que receba um n�mero e mostre uma mensagem caso este n�mero seja maior que 10. 

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;

	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	if (num >10)
	{
		printf("\n\nO n�mero � maior que 10!");
	}
	
}
