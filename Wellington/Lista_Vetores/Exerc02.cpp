#include <stdio.h>
#include <locale.h>
//2 - Armazenar 15 n�meros inteiros em um vetor NUM e imprimir uma listagem contendo o n�mero e uma das mensagens: par ou �mpar.
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num[15];
	
	for (int i = 0; i <15; i++)
	{
		printf("Digite o %d� n�mero: ", i+1);
		scanf("%d", &num[i]);
		
		
		
	}
	
	printf("\n\n");
	
	for (int i = 0; i <15; i++)
	{
		
		if (num[i]%2==0)
		printf("%d� n�mero: %d. N�mero par\n", i+1, num[i]);
		else
		printf("%d� n�mero: %d. N�mero �mpar\n", i+1, num[i]);
		
		
	}
	
	
	
	
}
