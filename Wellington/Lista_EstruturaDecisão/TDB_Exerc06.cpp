#include <stdio.h>
#include <locale.h>
// TDB 6) Cálculo de um salário líquido de um professor. Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float hora, qtde, desc;
	
	printf("Digite o valor da hora aula: R$");
	scanf("%f", &hora);
	printf("\nDigite a quantidade de horas aula dadas: ");
	scanf("%f", &qtde);
	printf("\nDigite a %% de desconto do INSS: ");
	scanf("%f", &desc);
	
	printf("\n\nSalário líquido do professor: R$%.2f.", (hora*qtde)*((100-desc)/100));

}
