#include <stdio.h>
#include <locale.h>
// 4) Ler um número inteiro e imprimir seu quadrado.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	printf("\n\nO quadrado de %i é %i.", num, (num*num));
}
