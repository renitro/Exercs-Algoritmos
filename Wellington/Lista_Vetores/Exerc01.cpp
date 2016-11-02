#include <stdio.h>
#include <locale.h>
//1 - Preencher um vetor com os numeros pares do número 2 a 20.
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int pares[9], num = 2;
	
	printf("Vetor com os números pares de 2 a 20:");
	
	for (int i = 0; i < 10; i++)
	{
		pares[i] = num;
		
		num += 2;
		
	printf("\n%d", pares[i]);	
		
	}
	
	
}
