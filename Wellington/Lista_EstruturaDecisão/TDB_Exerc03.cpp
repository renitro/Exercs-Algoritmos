#include <stdio.h>
#include <locale.h>
// TBD 3) Informe o tempo gasto numa viagem (em horas), a velocidade média e calcule o consumo.

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
