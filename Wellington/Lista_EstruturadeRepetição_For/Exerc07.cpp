#include <stdio.h>
#include <locale.h>
/*7 - Faça um programa que receba a idade e o peso de 7 pessoas, calcule e
mostre:
• A quantidade de pessoas com mais de 90 quilos;
• A média das idades das 7 pessoas.
• A quantidade de pessoas maiores de idade e abaixo de 60 quilos.
• A porcentagem de pessoas com idade entre 10 e 30 anos
*/

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int idade[7], qtd_peso = 0, soma_idade = 0, maior_menor = 0, pctg = 0;
	float peso [7];
	
	for(int i = 0; i < 7; i++)
	{
		printf("Digite a idade da %ia pessoa: ", (i+1));
		scanf("%d", &idade[i]);
		printf("Digite o peso da %ia pessoa: ", (i+1));
		scanf("%f", &peso[i]);
		
		soma_idade = soma_idade + idade[i];
		
		if (peso[i] > 90)
			qtd_peso++;
		if (idade[i] >= 18 && peso[i] < 60)
			maior_menor++;
		if ((idade[i] >= 10) && (idade[i] <= 30))
			pctg++;
	
	}
	printf("\n\nQuantidade de pessoas com mais de 90kg: %i.",qtd_peso);
	printf("\nMédia das idades: %i.", soma_idade/7);
	printf("\nQuantidade de pessoas maiores de idade e abaixo dos 60kg: %i.", maior_menor);
	printf("\nPorcentagem de pessoas com idade entre 10 e 30 anos: %i%%.", (100*pctg)/7 );
	
}
