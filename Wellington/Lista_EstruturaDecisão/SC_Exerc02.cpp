#include <stdio.h>
#include <locale.h>
// SC 2) Suponha que voc� atrasou uma conta. A cada m�s que voc� deixa de pagar, ser� cobrado 1% de juros no valor inicial. Ou seja, se voc� atrasar um m�s, ir� pagar 1%. Se atrasar 3 meses, ir� pagar 3% etc. Vamos supor que voc� pode atrasar, no m�ximo, 5 meses.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float conta;
	int mes;
	
	printf("Digite o valor de sua conta: ");
	scanf("%f", &conta);
	
	printf("\nDigite quantos m�ses de atraso (Acima de 5 m�ses n�o recebemos): ");
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
			
			printf("\n\nQuantidade de m�ses inv�lida.");
			
			break;
	}
}
