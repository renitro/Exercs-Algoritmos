#include <stdio.h>
#include <locale.h>
//2 - Armazenar 15 números inteiros em um vetor NUM e imprimir uma listagem contendo o número e uma das mensagens: par ou ímpar.
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num[15];
	
	for (int i = 0; i <15; i++)
	{
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &num[i]);
		
		
		
	}
	
	printf("\n\n");
	
	for (int i = 0; i <15; i++)
	{
		
		if (num[i]%2==0)
		printf("%dº número: %d. Número par\n", i+1, num[i]);
		else
		printf("%dº número: %d. Número ímpar\n", i+1, num[i]);
		
		
	}
	
	
	
	
}
