#include <stdio.h>
#include <locale.h>
/* 7) Desenvolva um programa para calcular e mostrar o desconto no valor de uma compra (fornecido pelo usuário), de acordo com a tabela:

Valor							Desconto
Até R$ 1000,00     	              10%
Entre R$ 1000,00 e R$ 5000,00	  20%
Acima de R$ 5000,00	              30%
*/

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float compra;
	
	printf("Digite o valor da compra: R$");
	scanf("%f", &compra);
	
	if (compra <= 1000)
	{
		printf("\n\nValor da compra com desconto (10%%): R$%.2f", (compra*0.9));
	}
	else if (compra <=5000)
	{
		printf("\n\nValor da compra com desconto (20%%): R$%.2f", (compra*0.8));
	}
	else
	{
		printf("\n\nValor da compra com desconto (30%%): R$%.2f", (compra*0.7));
	}
}
