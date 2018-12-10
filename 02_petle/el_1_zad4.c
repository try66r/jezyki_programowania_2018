// Napisać program obliczający silnię z podanej,
// niezbyt dużej, liczby naturalnej.

#include<stdio.h>

void take_input(int *user_input);
void count_factorial_and_print_out(int user_input);

int main()
{
  int user_input;
  take_input(&user_input);
  count_factorial_and_print_out(user_input);
}

void take_input(int *user_input)
{
  printf("Podaj niezbyt duza liczbe naturalna: ");
  scanf("%d", user_input);
}

void count_factorial_and_print_out(int user_input)
{
  int res = 1;
  while(user_input > 0)
  {
    res = res * user_input;
    user_input--;
  }
  printf("Silnia wynosi: %d\n", res);
}