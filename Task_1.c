#include <stdio.h>

int add(int x, int y) {
  return x + y;
}

int subtract(int x, int y) {
  return x - y;
}
int divide(int x, int y) {
  return x / y;
}

int multiply(int x, int y) {
  return x * y;
}

int main() {
  int x, y;
  char operator;

  printf("Enter two numbers: ");
  scanf("%d %d", &x, &y);

  printf("Enter an operator (+, -, *, /): ");
  scanf(" %c", &operator);

  switch (operator) {
    case '+':
      printf("%d %c %d = %d\n", x, operator, y, add(x, y));
      break;
    case '-':
      printf("%d %c %d = %d\n", x, operator, y, subtract(x, y));
      break;
    case '*':
      printf("%d %c %d = %d\n", x, operator, y, multiply(x, y));
      break;
    case '/':
      printf("%d %c %d = %d\n", x, operator, y, divide(x, y));
      break;
    default:
      printf("Invalid operator.\n");
      break;
  }

  return 0;
}
