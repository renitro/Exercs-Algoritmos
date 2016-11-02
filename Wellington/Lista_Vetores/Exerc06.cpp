/*6 - Armazenar nomes e notas da prova 1 e prova 2 de 15 alunos. Calcular e armazenar a
média. Armazenar também a situação do aluno: AP ou RP. Imprimir uma listagem
contendo nome, média e situação de cada aluno.*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main()
{
	setlocale(LC_ALL, "");
	char nome[15][50];
	float nota1[15], nota2[15];
	
	for (int i = 0; i < 15; i++)
	{
		printf("Digite o nome do %iº aluno(a): ", i+1);
		gets(nome[i]); fflush(stdin);
		
		printf("\nDigite a nota da primeira prova de %s: ",nome[i]);
		scanf("%f", &nota1[i]); fflush(stdin);
		
		printf("Digite a nota da segunda prova de %s: ",nome[i]);
		scanf("%f", &nota2[i]); fflush(stdin);
		
		printf("\n");
	}
	
	system("cls");
	
	for (int i = 0; i < 15; i++)
	{
		printf("%iº Aluno: %s - Média: %.2f - ",(i+1), nome[i], (nota1[i]+nota2[i])/2);
		
		if ((nota1[i]+nota2[i])/2 >= 6)
		printf("Aprovado(a)\n");
		else
		printf("Reprovado(a)\n");
	
	}
	
}
