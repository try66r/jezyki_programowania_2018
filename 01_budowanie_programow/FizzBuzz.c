// Program wypisuje Fizz dla liczb podzielnych przez 3,
// Buzz dla liczb podzielnych przez 5, a FizzBuzz dla
// liczb podzielnych przez 3 i 5 spośród liczb od 1
// do 100 w pętli.

#include<stdio.h>

void FizzBuzz();

int main()
{
  FizzBuzz();
}

void FizzBuzz()
{
  int i;
  for(i = 1; i <= 100; i++)
  {
    if((i % 3 == 0) && (i % 5 == 0))
    {
      printf("FizzBuzz");
    }
    else if(i % 3 == 0)
    {
      printf("Fizz");
    }
    else if(i % 5 == 0)
    {
      printf("Buzz");
    }
    else
    {
      printf("%d", i);
    }
    printf("\n");
  }
}