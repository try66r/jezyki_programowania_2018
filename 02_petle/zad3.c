// Napisz program, który wczyta dwie liczby 
// całkowite a i b(a < b) a następnie wypisze 
// wszystkie liczby całkowite pomiędzy a i b.

#include<stdio.h>

void take_input(int *a, int *b);
void count_and_print_out(int a, int b);

int main()
{
  int a, b;
  take_input(&a, &b);
  count_and_print_out(a, b);
}

void take_input(int *a, int *b)
{
  printf("Podaj pierwsza z liczb calkowitych: ");
  scanf("%d", a);
  printf("Podaj druga z liczb calkowitych: ");
  scanf("%d", b);
  while(*a >= *b)
  {
    printf("Pierwsza musi byc mniejsze od drugiej.\n");
    printf("Podaj pierwsza z liczb calkowitych: ");
    scanf("%d", a);
    printf("Podaj druga z liczb calkowitych: ");
    scanf("%d", b);
  }
}

void count_and_print_out(int a, int b)
{
  printf("Liczby pomiedzy %d i %d:\n", a, b);
  for(a = a + 1; a < b; a++)
  {
    printf("%d ", a);
  }
  printf("\n");
}