// Program wypisuje Fizz dla liczb podzielnych przez 3,
// Buzz dla liczb podzielnych przez 5, a FizzBuzz dla
// liczb podzielnych przez 3 i 5 spośród liczb od 1  
// do SIZE_OF_THE_ARRAY w zadanej tablicy.

#include<stdio.h>
#define SIZE_OF_THE_ARRAY 100

void fill_the_array(int *array_to_fill);
void count_and_print_the_result(int *given_array);

int main()
{
  int array_of_elements[SIZE_OF_THE_ARRAY + 1];
  fill_the_array(array_of_elements);
  count_and_print_the_result(array_of_elements);
}

void fill_the_array(int *array_to_fill)
{
  int i = 1;
  while(i <= SIZE_OF_THE_ARRAY)
  {
    *array_to_fill = i;
    array_to_fill++;
    i++;
  }
}

void count_and_print_the_result(int *given_array)
{
  while(*given_array <= SIZE_OF_THE_ARRAY)
  {
    if((*given_array % 3 == 0) && (*given_array % 5 == 0))
    {
      printf("FizzBuzz, ");
    }
    else if(*given_array % 3 == 0)
    {
      printf("Fizz, ");
    }
    else if(*given_array % 5 == 0)
    {
      printf("Buzz, ");
    }
    else
    {
      printf("%d, ", *given_array);
    }
    given_array++;
  }
  printf("\n");
}