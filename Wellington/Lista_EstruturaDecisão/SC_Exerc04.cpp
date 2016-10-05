#include <stdio.h>
#include <locale.h>
/* SC 4) Um posto est� vendendo combust�veis com a seguinte tabela de descontos:
- �lcool: at� 20 litros, desconto de 3% por litro e acima de 20 litros, desconto de
5% por litro;
- Gasolina: at� 20 litros, desconto de 4% por litro e acima de 20 litros, desconto
de 6% por litro.
Escreva um algoritmo que leia o n�mero de litros vendidos, o tipo de combust�vel
(A-�lcool, G-gasolina) e imprima o valor a ser pago pelo cliente.
Considere que o pre�o do litro da gasolina � R$ 3.79 e o pre�o do litro do �lcool
� R$ 2,19 */

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char comb;
	float litros;
	
	printf("Digite o combust�vel desejado (A para �lcool e G para Gasolina): ");
	scanf("%c",&comb);
	
	switch(comb)
	{
		case 'a':
		case 'A':
			printf("\nLitros de �lcool: ");
			scanf("%f", &litros);
			
			if (litros < 20)
			{
				printf("\n\nTotal a pagar: R$%.2f.", (litros*2.19)*0.97);
			}
			else
			{
				printf("\n\nTotal a pagar: R$%.2f.", (litros*2.19)*0.95);
			}
			
			break;
			
		case 'g':
		case 'G':
			printf("\nLitros de Gasolina: ");
			scanf("%f", &litros);
			
			if (litros < 20)
			{
				printf("\n\nTotal a pagar: R$%.2f.", (litros*3.79)*0.96);
			}
			else
			{
				printf("\n\nTotal a pagar: R$%.2f.", (litros*3.79)*0.94);
			}
			
			break;
		
		default:
			printf("\nCombust�vel inv�lido!");
			
			break;	
	}
}
	
