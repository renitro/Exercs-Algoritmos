#include <stdio.h>
#include <locale.h>
//1 - Preencher um vetor com os numeros pares do n�mero 2 a 20.
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int pares[9], num = 2;
	
	printf("Vetor com os n�meros pares de 2 a 20:");
	
	for (int i = 0; i < 10; i++)
	{
		pares[i] = num;
		
		num += 2;
		
	printf("\n%d", pares[i]);	
		
	}
	
	
}
