#include <stdio.h>
#include <locale.h>
// 2) Faça um programa que receba o sexo como dado de entrada e informe se o usuário é homem ou mulher.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	
	printf("Digite seu sexo (M ou F): ");
	scanf("%c", &sexo);
	
	if (sexo == 'm' || sexo == 'M')
	{
		printf("\n\nVocê é Homem!");		
	} 
	else if (sexo == 'f' || sexo == 'F')
	{
		printf("\n\nVocê é Mulher!");
	}
	else
	{
		printf("\n\nSexo inválido!");
	}
	
}
