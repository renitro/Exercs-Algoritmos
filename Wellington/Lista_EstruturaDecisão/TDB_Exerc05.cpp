#include <stdio.h>
#include <locale.h>
// TDB 5) Informar um saldo e imprimir o saldo com reajuste de 1%.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um valor: ");
	scanf("%f", &num);
	
	printf("\n\nValor reajustado em 1%%: %.2f.", num*1.01);
}
