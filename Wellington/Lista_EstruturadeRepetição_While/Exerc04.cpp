#include <stdio.h>
#include <locale.h>
// 4 - Fa�a um programa que leia as m�dias finais de v�rios alunos de uma turma e mostre a maior m�dia, a menor m�dia e a m�dia aritm�tica da turma. O programa para quando encontrar uma m�dia negativa..

main()
{
	setlocale(LC_ALL, "Portuguese");
			
	float media, maior, menor, cont = 0, soma = 0;
	
	printf("Digite a m�dia do aluno: ");
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
		
		printf("Digite a m�dia do aluno: ");
		scanf("%f", &media);
		
		
		
		if (maior < media && media >= 0)
		maior = media;
		
		if (menor > media && media >=0)
		menor = media;
	}
	printf("\n\n\n%f %f", soma, cont);
	printf("\n\nMaior m�dia digitada: %.2f", maior);
	printf("\nMenor m�dia digitada: %.2f", menor);
	printf("\nM�dia aritm�tica da turma: %.2f", (soma/cont));
}
