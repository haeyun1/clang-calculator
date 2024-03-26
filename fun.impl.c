#include "fun.h"

void print_menu() {
  printf("==Simple Calculator==\n");
  printf("1. Addition\n");
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("5. Exit\n");
}

bool is_exit(int option) { return option == EXIT; }

int add(int a, int b) { return a + b; }

int subtract(int a, int b) { return a - b; }

int multiply(int a, int b) {
  // Your code here
}

int divide(int a, int b) {
  // Your code here
}
