#include <stdio.h>
#include <locale.h>
#include <math.h>
// IE 3) Ler 1 n�mero. Se positivo, imprimir raiz quadrada sen�o o quadrado

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um n�mero: ");
	scanf("%f", &num);
	
	if (num >= 0 )
	{
		printf("\n\nRaiz quadrada de %.2f: %.2f", num, (sqrt(num)));
	}
	else
	{
		printf("\n\nQuadrado de %.2f: %.2f", num, (num*num));
	}
}
