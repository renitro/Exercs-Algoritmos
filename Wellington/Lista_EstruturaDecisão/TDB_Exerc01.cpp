#include <stdio.h>
#include <locale.h>
// TDB 1) Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um valor: ");
	scanf("%f", &num);
	
	printf("\n\nValor com 10%% de reajuste: %.2f",(num*1.1));
	
}
