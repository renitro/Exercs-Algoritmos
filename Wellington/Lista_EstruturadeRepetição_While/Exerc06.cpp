#include <stdio.h>
#include <locale.h>
// 6 - Fa�a um programa que dada uma quantia de dinheiro em libras inglesas imprime o equivalente em d�lares canadenses. A rela��o � �1,0 = $1,84. Depois disso, pergunte se o usu�rio quer ou n�o transformar mais algum valor; se n�o quiser, encerre.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char verifica = 'S';
	float libras;
	
	while (verifica != 'N')
	{
		printf("\nDigite o valor (em libras) que deseja converter: �");
		scanf("%f", &libras); fflush(stdin);
		
		printf("\n\nValor em d�lares canadenses: $%.2f", (libras*1.84));
		
		printf("\n\nDeseja converter outro valor?");
		scanf("%c", &verifica);
	}
}
	
