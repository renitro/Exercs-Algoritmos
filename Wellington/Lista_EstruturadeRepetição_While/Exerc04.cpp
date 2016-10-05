#include <stdio.h>
#include <locale.h>
// 4 - Faça um programa que leia as médias finais de vários alunos de uma turma e mostre a maior média, a menor média e a média aritmética da turma. O programa para quando encontrar uma média negativa..

main()
{
	setlocale(LC_ALL, "Portuguese");
			
	float media, maior, menor, cont = 0, soma = 0;
	
	printf("Digite a média do aluno: ");
	scanf("%f", &media);
	
	maior = media;
	menor = media;
	
	while (media >=0)
	{
		if (media >= 0)
		{
			cont++;
			soma = media + soma;
		}
		
		printf("Digite a média do aluno: ");
		scanf("%f", &media);
		
		
		
		if (maior < media && media >= 0)
		maior = media;
		
		if (menor > media && media >=0)
		menor = media;
	}
	printf("\n\n\n%f %f", soma, cont);
	printf("\n\nMaior média digitada: %.2f", maior);
	printf("\nMenor média digitada: %.2f", menor);
	printf("\nMédia aritmética da turma: %.2f", (soma/cont));
}
