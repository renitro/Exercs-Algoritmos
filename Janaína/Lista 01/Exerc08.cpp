#include <stdio.h>
#include <locale.h>
/* 8) Um posto de combust�vel vende tr�s tipos de combust�vel: �lcool, diesel e gasolina. 
O pre�o de cada litro dos combust�veis � apresentado na tabela a seguir. Fa�a um programa que leia um caractere 
que representa o tipo de combust�vel comprado (a, d ou g) e a quantidade em litros. O programa deve imprimir o valor em reais a ser pago pelo combust�vel.
A - �lcool            D - Diesel        G - Gasolina
  1,7997	            0,9798              2,1009
*/

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char comb;
	float litros;

	printf("Digite o combust�vel (A para �lcool, D para Diesel e G para Gasolina): ");
	scanf("%c", &comb);
	
	if (comb == 'a' || comb == 'A')
	{
		printf("\nDigite a quantidade de litros de �lcool: ");
		scanf("%f", &litros);
		
		printf("\n\nTotal a pagar: R$%.2f.", (litros*1.7997));
		
	}
	else if (comb == 'd' || comb == 'D')
	{
		printf("\nDigite a quantidade de litros de diesel: ");
		scanf("%f", &litros);
		
		printf("\n\nTotal a pagar: R$%.2f.", (litros*0.9798));
	}
	else if (comb == 'g' || comb == 'G')
	{
		printf("\nDigite a quantidade de litros de gasolina: ");
		scanf("%f", &litros);
		
		printf("\n\nTotal a pagar: R$%.2f.", (litros*2.1009));
	}
	else
	{
		printf("\nCombust�vel inv�lido!");
	}
}	


