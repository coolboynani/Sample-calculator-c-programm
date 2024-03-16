#include <stdio.h>

int main() {
  int num1, num2, result;
  char op;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &op);

  switch (op) {
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
      printf("Invalid operator");
      return 1;
  }

  printf("The result is: %d\n", result);

  return 0;
}
