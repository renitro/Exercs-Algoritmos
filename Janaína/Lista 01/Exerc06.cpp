#include <stdio.h>
#include <locale.h>
// 6) Escreva um programa que lê as três notas obtidas por um aluno durante o semestre. Calcular a sua média (aritmética) e informar a sua menção Aprovado (media >= 7), Reprovado (media <= 5) e Recuperação (media entre 5 e 7). 

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &nota1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f", &nota2);
	
	printf("\nDigite a terceira nota: ");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	if (media >=7)
	{
		printf("\n\nMédia final: %.1f. Aprovado!",media);
	}
	else if (media > 5)
	{
		printf("\n\nMédia final: %.1f. Recuperação!",media);
	}
	else
	{
		printf("\n\nMédia final: %.1f. Reprovado!",media);	
	}
}
