#include <stdio.h>
#include <locale.h>
// IE 6) Um comerciante comprou um produto e quer vendê-lo com lucro de 45% se o valor da compra for menor que 20,00; caso contrário, o lucro será de 30%. Entrar com o valor do produto e imprimir o valor da venda.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float preco;
	
	printf("Digite o valor de compra do produto: R$");
	scanf("%f", &preco);
	
	if (preco < 20)
	{
		printf("\n\nPreço de venda: R$%.2f.", (preco*1.45));
	}
	else
	{
		printf("\n\nPreço de venda: R$%.2f.", (preco*1.30));
	}	
}
