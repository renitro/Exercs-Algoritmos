#include <stdio.h>
#include <locale.h>
// IE 7) Ler um n�mero inteiro e verificar se est� compreendido entre 20 e 80. Se tiver, imprimir �parab�ns�, sen�o imprimir �fora do intervalo�.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%i", &num);
	
	if (num >= 20 && num <= 80)
	{
		printf("\n\nParab�ns!");
	}
	else
	{
		printf("\n\nFora do intervalo.");
	} 	
}
