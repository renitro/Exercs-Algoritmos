#include <stdio.h>
#include <locale.h>
// TBD 3) Informe o tempo gasto numa viagem (em horas), a velocidade m�dia e calcule o consumo.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float horas, velmed, kml;
	
	printf("Digite quantos km/L o carro faz: ");
	scanf("%f", &kml);
	
	printf("\nDigite o tempo gasto na viagem (em horas): ");
	scanf("%f", &horas);
	
	printf("\nDigite a velocidade m�dia (em km//H): ");
	scanf("%f",&velmed);
	
	printf("\n\nCombust�vel consumido: %.2fL.",(velmed*horas)/kml);
	
}
