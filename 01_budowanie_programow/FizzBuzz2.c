// Program wypisuje Fizz dla liczb podzielnych przez 3,
// Buzz dla liczb podzielnych przez 5, a FizzBuzz dla
// liczb podzielnych przez 3 i 5 spośród liczb od 1  
// do 100 w zadanej tablicy.

#include<stdio.h>

char *codes[] = { "", "Fizz", "Buzz", "FizzBuzz" };
int results[100 + 1];

void encode_fizz_buzz(int *tab);
void print_fizz_buzz(int *tab);

int main()
{
  encode_fizz_buzz(results);
  print_fizz_buzz(results);
}

void print_fizz_buzz(int *tab)
{
  for (int i = 1; i <= 100; i++)
  {
    if (tab[i] > 0)
    {
      printf("%s ", codes[tab[i]]);
    }
    else
    {
      printf("%d ", i);
    }
  }
  printf("\n");
}

void encode_fizz_buzz(int *tab)
{
  int i;

  for (i = 1; i < 100 + 1; i++)
  {
    if ((i % 3 == 0) && (i % 5 == 0))
    {
      tab[i] = 3;
    }
    else if (i % 3 == 0)
    {
      tab[i] = 1;
    }
    else if (i % 5 == 0)
    {
      tab[i] = 2;
    }
    else
    {
      tab[i] = 0;
    }
  }
}
