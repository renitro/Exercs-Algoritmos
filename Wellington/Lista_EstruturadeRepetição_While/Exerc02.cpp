#include <stdio.h>
#include <locale.h>
// 2 - Escrever um programa que receba vários números inteiros no teclado. E no final imprimir a média dos números múltiplos de 3. Para sair digitar 0 (zero).

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num = 1, cont = 0, soma = 0;
	
	while (num != 0)
	{
		printf("Digite um número (0 sai do programa): ");
		scanf("%i", &num);
		
		if ((num % 3 == 0) && (num != 0))
		{
			cont++;
			soma = num + soma;
		}
	}
	
	printf("\n\nMédia dos números múltiplos de 3: %i", soma/cont);
}
