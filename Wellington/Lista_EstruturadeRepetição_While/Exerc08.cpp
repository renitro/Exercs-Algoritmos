#include <stdio.h>
#include <locale.h>
// 7 - Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21 anos. Total de pessoas com mais de 50 anos. O programa termina quando idade for = -99.

main()
{
	setlocale(LC_ALL, "Portuguese");
  
  int num;
  do
  {
    printf("Digite um número entre 1 e 4: );
    scanf("%i", &num);
   
    switch(num)
    {
        case 1: printf("\n\nNúmero digitado: 1);
        break;
        case 2: printf("\n\nNúmero digitado: 2);
        break;
        case 3: printf("\n\nNúmero digitado: 3);
        break;
        case 4: printf("\n\nNúmero digitado: 4);
        break;
      
        default: printf("\n\nEntrada inválida!\n);
        break;
    }     
  
  
   } while (num < 1 || num > 4);
}
