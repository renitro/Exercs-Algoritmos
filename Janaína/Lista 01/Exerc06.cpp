#include <stdio.h>
#include <locale.h>
// 6) Escreva um programa que l� as tr�s notas obtidas por um aluno durante o semestre. Calcular a sua m�dia (aritm�tica) e informar a sua men��o Aprovado (media >= 7), Reprovado (media <= 5) e Recupera��o (media entre 5 e 7). 

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
		printf("\n\nM�dia final: %.1f. Aprovado!",media);
	}
	else if (media > 5)
	{
		printf("\n\nM�dia final: %.1f. Recupera��o!",media);
	}
	else
	{
		printf("\n\nM�dia final: %.1f. Reprovado!",media);	
	}
}
