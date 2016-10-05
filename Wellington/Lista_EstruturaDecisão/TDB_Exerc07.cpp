#include <stdio.h>
#include <locale.h>
// TDB 7) Calcular o consumo de um veículo conforme os dados informados no teclado: Tempo em horas, velocidade média e distância.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float horas, velmed, kml;
	
	printf("Digite quantos km/L o carro faz: ");
	scanf("%f", &kml);
	
	printf("\nDigite o tempo gasto na viagem (em horas): ");
	scanf("%f", &horas);
	
	printf("\nDigite a velocidade média (em km//H): ");
	scanf("%f",&velmed);
	
	printf("\n\nCombustível consumido: %.2fL.",(velmed*horas)/kml);
	
}
