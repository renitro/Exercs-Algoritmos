#include <stdio.h>
#include <locale.h>
// SC 1) Informe o tipo de carro (A, B e C). Informe o percurso rodado em km e calcule o consumo estimado, conforme o tipo, sendo (A=8, B=9 e C=12) km/litro.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char carro;
	float km;
	
	printf("Digite o tipo do carro (A,B ou C): ");
	scanf("%c", &carro);
	
	switch(carro)
	{
		case 'a':
		case 'A':
			printf("\nInforme o percurso (em KM): ");
			scanf("%f", &km);
			
			printf("\n\nConsumo estimado: %.2fL.", (km/8));
			
			break;
			
		case 'b':
		case 'B':
			printf("\nInforme o percurso (em KM): ");
			scanf("%f", &km);
			
			printf("\n\nConsumo estimado: %.2fL.", (km/9));
			
			break;
			
		case 'c':
		case 'C':
			printf("\nInforme o percurso (em KM): ");
			scanf("%f", &km);
			
			printf("\n\nConsumo estimado: %.2fL.", (km/12));
			
			break;
			
		default:
			printf("\n\nTipo de carro inválido.");	
			break;
	}
}
