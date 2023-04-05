#include <stdio.h>

int main() {
   char operator;
   float num1, num2, result;

   printf("Digite um operador (+, -, *, /): ");
   scanf("%c", &operator);

   printf("Digite dois números: ");
   scanf("%f %f", &num1, &num2);

   switch(operator) {
      case '+':
         result = num1 + num2;
         break;

      case '-':
         result = num1 - num2;
         break;

      case '*':
         result = num1 * num2;
         break;

      case '/':
         result = num1 / num2;
         break;

      default:
         printf("Operador inválido");
         return 0;
   }

   printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
   return 0;
}
