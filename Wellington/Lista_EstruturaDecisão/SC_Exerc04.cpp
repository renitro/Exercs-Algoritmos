#include <stdio.h>
#include <locale.h>
/* SC 4) Um posto está vendendo combustíveis com a seguinte tabela de descontos:
- Álcool: até 20 litros, desconto de 3% por litro e acima de 20 litros, desconto de
5% por litro;
- Gasolina: até 20 litros, desconto de 4% por litro e acima de 20 litros, desconto
de 6% por litro.
Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível
(A-álcool, G-gasolina) e imprima o valor a ser pago pelo cliente.
Considere que o preço do litro da gasolina é R$ 3.79 e o preço do litro do álcool
é R$ 2,19 */

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char comb;
	float litros;
	
	printf("Digite o combustível desejado (A para Álcool e G para Gasolina): ");
	scanf("%c",&comb);
	
	switch(comb)
	{
		case 'a':
		case 'A':
			printf("\nLitros de Álcool: ");
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
			printf("\nCombustível inválido!");
			
			break;	
	}
}
	
