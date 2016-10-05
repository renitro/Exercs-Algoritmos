#include <stdio.h>
#include <locale.h>
// SC 3) Crie uma calculadora usando a instrução SWITCH, que pergunte qual das operações básicas quer fazer (+, -, * e /), em seguida peça os dois números e mostre o resultado da operação matemática entre eles.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char op;
	float num1, num2;
	
	printf("Digite a operação desejada: (+, -, * ou /): ");
	scanf("%c", &op);
	
	switch(op)
	{
		case '+':
			printf("\nDigite o primeiro número: ");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo número: ");
			scanf("%f", &num2);
			
			printf("\n\nOperação realizada: %.2f + %.2f = %.2f.", num1, num2, (num1+num2));
			
			break;
		
		case '-':
			printf("\nDigite o primeiro número: ");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo número: ");
			scanf("%f", &num2);
			
			printf("\n\nOperação realizada: %.2f - %.2f = %.2f.", num1, num2, (num1-num2));
			
			break;
			
		case '*':
			printf("\nDigite o primeiro número: ");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo número: ");
			scanf("%f", &num2);
			
			printf("\n\nOperação realizada: %.2f * %.2f = %.2f.", num1, num2, (num1*num2));
			
			break;
			
		case '/':
			printf("\nDigite o primeiro número: ");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo número: ");
			scanf("%f", &num2);
			
			printf("\n\nOperação realizada: %.2f / %.2f = %.2f.", num1, num2, (num1/num2));
			
			break;
			
		default:
			printf("\n\nOperação inválida!");
			
			break;
	}
}
