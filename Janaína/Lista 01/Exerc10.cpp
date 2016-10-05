#include <conio.h>
#include <locale.h>
/* 10) Imagine uma prova com 100 questões, em que cada uma delas vale 1 ponto. Nesse caso, faça um programa para divulgar o resultado a partir de conceitos, de acordo com a seguinte tabela:

Pontos		Conceito
Até 50			D
Entre 50 e 70	C
Entre 70 e 90	B
Entre 90 e 100	A
*/

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float pontos;
	
	printf("Digite a quantidade de pontos feitos na prova: ");
	scanf("%f", &pontos);
	
	if (pontos <= 50 && pontos >= 0)
	{
		printf("\n\nConceito: D.");
	}
	else if (pontos <= 70 && pontos >= 0)
	{
		printf("\n\nConceito: C.");
	}
	else if (pontos <= 90 && pontos >= 0)
	{
		printf("\n\nConceito: B.");
	}
	else if (pontos <= 100 && pontos >= 0)
	{
		printf("\n\nConceito: A.");
	}
	else
	{
		printf("\n\nPontuação inválida.");
	}
	
}
