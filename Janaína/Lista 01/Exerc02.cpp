#include <stdio.h>
#include <locale.h>
// 2) Fa�a um programa que receba o sexo como dado de entrada e informe se o usu�rio � homem ou mulher.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char sexo;
	
	printf("Digite seu sexo (M ou F): ");
	scanf("%c", &sexo);
	
	if (sexo == 'm' || sexo == 'M')
	{
		printf("\n\nVoc� � Homem!");		
	} 
	else if (sexo == 'f' || sexo == 'F')
	{
		printf("\n\nVoc� � Mulher!");
	}
	else
	{
		printf("\n\nSexo inv�lido!");
	}
	
}
