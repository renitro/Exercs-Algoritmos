#include <stdio.h>
#include <locale.h>
// TDB 7) Calcular o consumo de um ve�culo conforme os dados informados no teclado: Tempo em horas, velocidade m�dia e dist�ncia.

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
