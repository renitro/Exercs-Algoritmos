#include <stdio.h>
#include <locale.h>
// SC 3) Crie uma calculadora usando a instru��o SWITCH, que pergunte qual das opera��es b�sicas quer fazer (+, -, * e /), em seguida pe�a os dois n�meros e mostre o resultado da opera��o matem�tica entre eles.

main()
{
	setlocale(LC_ALL, "Portuguese");
	
	char op;
	float num1, num2;
	
	printf("Digite a opera��o desejada: (+, -, * ou /): ");
	scanf("%c", &op);
	
	switch(op)
	{
		case '+':
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo n�mero: ");
			scanf("%f", &num2);
			
			printf("\n\nOpera��o realizada: %.2f + %.2f = %.2f.", num1, num2, (num1+num2));
			
			break;
		
		case '-':
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo n�mero: ");
			scanf("%f", &num2);
			
			printf("\n\nOpera��o realizada: %.2f - %.2f = %.2f.", num1, num2, (num1-num2));
			
			break;
			
		case '*':
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo n�mero: ");
			scanf("%f", &num2);
			
			printf("\n\nOpera��o realizada: %.2f * %.2f = %.2f.", num1, num2, (num1*num2));
			
			break;
			
		case '/':
			printf("\nDigite o primeiro n�mero: ");
			scanf("%f", &num1);
			
			printf("\nDigite o segundo n�mero: ");
			scanf("%f", &num2);
			
			printf("\n\nOpera��o realizada: %.2f / %.2f = %.2f.", num1, num2, (num1/num2));
			
			break;
			
		default:
			printf("\n\nOpera��o inv�lida!");
			
			break;
	}
}
