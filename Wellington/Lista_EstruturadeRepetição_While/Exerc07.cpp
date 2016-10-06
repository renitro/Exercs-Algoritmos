#include <stdio.h>
#include <locale.h>
// 7 - Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21 anos. Total de pessoas com mais de 50 anos. O programa termina quando idade for = -99.

main()
{
	setlocale(LC_ALL, "Portuguese");

	int idade, mais = 0, menos = 0;
	
	do
	{
	
	printf("Digite a idade de uma pessoa: ");
	scanf("%i", &idade);
	
	if (idade < 21 && idade >=0)
	menos++;
	
	if (idade > 50)
	mais++;
		
	}
	while (idade != (-99));
	
	printf("\n\nQuantidade de pessoas com menos de 21 anos: %i.", menos);
	printf("\nQuantidade de pessoas com mais de 50 anos: %i.", mais);
}
