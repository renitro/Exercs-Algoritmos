#include <stdio.h>
#include <locale.h>
/* 9)  Elabore um programa, que solicite ao usu�rio a velocidade do ve�culo e apresente na tela a penalidade, 
de acordo com a tabela a seguir. Deve-se utilizar o comando de sele��o "if-else" para selecionar a mensagem. O valor em negrito foi fornecido pelo usu�rio.

Velocidade	Penalidade
At� 60			Sem Penalidade
Entre 60 e 80	Multa Leve
Entre 80 e 100	Multa Grave
Entre 100 e 120	Multa Gravissima
Acima de 120	Detencao do Condutor
*/
main()
{
	setlocale(LC_ALL, "Portuguese");
	
	int velocidade;
	
	printf("Digite a velocidade do ve�culo: ");
	scanf("%i", &velocidade);
	
	if (velocidade <= 60)
	{
		printf("\n\nSem penalidade.");
	}
	else if (velocidade <= 80)
	{
		printf("\n\nMulta leve.");
	}
	else if (velocidade <= 100)
	{
		printf("\n\nMulta grave.");
	}
	else if (velocidade <= 120)
	{
		printf("\n\nMulta grav�ssima.");
	}
	else
	{
		printf("\n\nDeten��o do condutor.");
	}
}

