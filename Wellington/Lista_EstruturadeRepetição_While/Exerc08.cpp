#include <stdio.h>
#include <locale.h>
/* 8 - Solicitar um número entre 1 e 4. Se a pessoas digitar um número diferente,
mostrar a mensagem "entrada inválida" e solicitar o número novamente. Se
digitar correto mostrar o número digitado..
*/
main()
{
	setlocale(LC_ALL, "Portuguese");
  
  int num;
  do
  {
    printf("Digite um número entre 1 e 4: ");
    scanf("%i", &num);
   
    switch(num)
    {
        case 1: printf("\n\nNúmero digitado: 1");
        break;
        case 2: printf("\n\nNúmero digitado: 2");
        break;
        case 3: printf("\n\nNúmero digitado: 3");
        break;
        case 4: printf("\n\nNúmero digitado: 4");
        break;
      
        default: printf("\n\nEntrada inválida!\n\n");
        break;
    }     
  
  
   } while (num < 1 || num > 4);
}
