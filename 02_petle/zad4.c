// Napisz program, który wyliczy sumę liczb 
// naturalnych od 1 do liczby n podanej przez 
// użytkownika.Kiedy użytkownik poda liczbę mniejszą
// niż 1, to program powinien wypisać stosowny 
// komunikat o błędzie.

#include<stdio.h>

void take_input(int *n);
void count_and_print_out(int n);

int main()
{
  int n;
  take_input(&n);
  count_and_print_out(n);
}

void take_input(int *n)
{
  printf("Podaj n: ");
  scanf("%d", n);
  while(*n < 1)
  {
    printf("n musi byc >= 1\n");
    printf("Podaj n: ");
    scanf("%d", n);
  }
}

void count_and_print_out(int n)
{
  int i, res;
  res = 0;
  for(i = 1; i <= n; i++)
  {
    res = res + i;
  }
  printf("Suma wynosi: %d\n", res);
}