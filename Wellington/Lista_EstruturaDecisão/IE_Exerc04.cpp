#include <stdio.h>
#include <locale.h>
// IE 4) Solicitar salario, prestação. Se prestação for maior que 20% do salário, imprimir: Empréstimo não pode ser concedido, senão Imprimir Empréstimo pode ser concedido.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float sal, pres;
	
	printf("Digite o valor do salário: R$");
	scanf("%f", &sal);
	
	printf("Digite o valor da prestação: R$");
	scanf("%f", &pres);
	
	if ((sal*0.2) < pres)
	{
		printf("\n\nEmpréstimo não pode ser concedido.");
	}
	else
	{
		printf("\n\nEmpréstimo pode ser concedido!");
	}
}
