#include <stdio.h>
#include <locale.h>
// 4) Ler um n�mero inteiro e imprimir seu quadrado.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	printf("\n\nO quadrado de %i � %i.", num, (num*num));
}
