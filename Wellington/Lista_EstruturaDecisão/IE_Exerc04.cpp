#include <stdio.h>
#include <locale.h>
// IE 4) Solicitar salario, presta��o. Se presta��o for maior que 20% do sal�rio, imprimir: Empr�stimo n�o pode ser concedido, sen�o Imprimir Empr�stimo pode ser concedido.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float sal, pres;
	
	printf("Digite o valor do sal�rio: R$");
	scanf("%f", &sal);
	
	printf("Digite o valor da presta��o: R$");
	scanf("%f", &pres);
	
	if ((sal*0.2) < pres)
	{
		printf("\n\nEmpr�stimo n�o pode ser concedido.");
	}
	else
	{
		printf("\n\nEmpr�stimo pode ser concedido!");
	}
}
