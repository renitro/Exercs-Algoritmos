#include <stdio.h>
#include <locale.h>
// 6 - Faça um programa que dada uma quantia de dinheiro em libras inglesas imprime o equivalente em dólares canadenses. A relação é £1,0 = $1,84. Depois disso, pergunte se o usuário quer ou não transformar mais algum valor; se não quiser, encerre.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char verifica = 'S';
	float libras;
	
	while (verifica != 'N')
	{
		printf("\nDigite o valor (em libras) que deseja converter: £");
		scanf("%f", &libras); fflush(stdin);
		
		printf("\n\nValor em dólares canadenses: $%.2f", (libras*1.84));
		
		printf("\n\nDeseja converter outro valor?");
		scanf("%c", &verifica);
	}
}
	
