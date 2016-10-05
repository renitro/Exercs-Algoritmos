#include <stdio.h>
#include <locale.h>
// IE 7) Ler um número inteiro e verificar se está compreendido entre 20 e 80. Se tiver, imprimir “parabéns”, senão imprimir “fora do intervalo”.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número: ");
	scanf("%i", &num);
	
	if (num >= 20 && num <= 80)
	{
		printf("\n\nParabéns!");
	}
	else
	{
		printf("\n\nFora do intervalo.");
	} 	
}
