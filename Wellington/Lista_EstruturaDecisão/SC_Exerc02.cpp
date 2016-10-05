#include <stdio.h>
#include <locale.h>
// SC 2) Suponha que você atrasou uma conta. A cada mês que você deixa de pagar, será cobrado 1% de juros no valor inicial. Ou seja, se você atrasar um mês, irá pagar 1%. Se atrasar 3 meses, irá pagar 3% etc. Vamos supor que você pode atrasar, no máximo, 5 meses.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float conta;
	int mes;
	
	printf("Digite o valor de sua conta: ");
	scanf("%f", &conta);
	
	printf("\nDigite quantos mêses de atraso (Acima de 5 mêses não recebemos): ");
	scanf("%i",&mes);
	
	switch (mes)
	{
		case 1:
			
			printf("\n\nValor corrigido: R$%.2f.",(conta*1.01));
			
			break;
			
		case 2:
			
			printf("\n\nValor corrigido: R$%.2f.",(conta*1.02));
			
			break;
		
		case 3:
			
			printf("\n\nValor corrigido: R$%.2f.",(conta*1.03));
			
			break;
		
		case 4:
			
			printf("\n\nValor corrigido: R$%.2f.",(conta*1.04));
			
			break;
			
		case 5:
			
			printf("\n\nValor corrigido: R$%.2f.",(conta*1.05));
			
			break;
			
		default:
			
			printf("\n\nQuantidade de mêses inválida.");
			
			break;
	}
}
