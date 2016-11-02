#include <stdio.h>
#include <locale.h>
#include <conio.h>
//3 - Armazenar nome e salário de 20 pessoas. Calcular e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma listagem numerada com nome e novo salário.
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float sal[20];
	char nome [20][50];
	
	
	for (int i = 0; i <20; i++)
	{
		printf("Digite o %dº nome: ", i+1);
		gets(nome[i]); fflush(stdin);
		
		printf("Digite o salário de %s: R$",nome[i]);
		scanf("%f", &sal[i]); fflush(stdin);
		
		printf("\n");
		
	}
	
	
	
	for (int i = 0; i <20; i++)
	{
		printf("\n\n");
		
		printf("%dº nome digitado: %s\nSalário de %s reajustado em 8%%: R$%.2f", i+1, nome[i], nome[i], sal[i]*1.08);
			
		
	}
	

}

