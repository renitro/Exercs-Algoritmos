#include <stdio.h>
#include <locale.h>
/* SC 3.5) Um funcion�rio ir� receber um aumento de acordo com o seu plano de
trabalho, de acordo com a tabela abaixo:
Plano Aumento
A 10%
B 15%
C 20%
Fa�a um programa que leia o plano de trabalho e o sal�rio atual de um
funcion�rio e calcula e imprime o seu novo sal�rio. Use o comando switch.
*/
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char pt;
	float sal;
	
	printf("Digite o plano de trabalho (A,B ou C): ");
	scanf("%c", &pt);
	
	switch(pt)
	{
		case 'a':
		case 'A':
			printf("\nInforme o salario: R$");
			scanf("%f", &sal);
			
			printf("\n\nSal�rio reajustado: R$%.2f.", sal*1.1);
			
			break;
			
		case 'b':
		case 'B':
			printf("\nInforme o salario: R$");
			scanf("%f", &sal);
			
			printf("\n\nSal�rio reajustado: R$%.2f.", sal*1.15);
			
			break;
			
		case 'c':
		case 'C':
			printf("\nInforme o salario: R$");
			scanf("%f", &sal);
			
			printf("\n\nSal�rio reajustado: R$%.2f.", sal*1.2);
			
			break;
			
		default:
			printf("\n\nTipo de plano de trabalho inv�lido.");	
			break;
	}
}
