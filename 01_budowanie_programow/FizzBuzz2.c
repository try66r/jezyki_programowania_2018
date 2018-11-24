// Program wypisuje Fizz dla liczb podzielnych przez 3,
// Buzz dla liczb podzielnych przez 5, a FizzBuzz dla
// liczb podzielnych przez 3 i 5 spośród liczb od 1  
// do SIZE_OF_THE_ARRAY w zadanej tablicy.

#include<stdio.h>
#define SIZE_OF_THE_ARRAY 100

void fill_the_array(int *array_to_fill);
void count_and_print_the_result(int *given_array);

char codes = { "", "Fizz", "Buzz", "FizzBuzz" };
int [100 + 1];
encode_fizz_buzz(int *tab);
print_fizz_buzz(int *tab);

print_fizz_buzz(int *tab) {
  // pętla
  if (tab[i] > 0) {
    printf("%d ", codes[tab[i]]);
  } else {
    printf("%d ", i); 
  }
}

encode_fizz_buzz(int *tab) {
  int i;
  
  for (i = 1; i < 100 + 1; i++) {
    if((i % 3 == 0) && (i % 5 == 0))
    {
      tab[i] = 3;
    }
    else if(i % 3 == 0)
    {
      tab[i] = 1;
    }
    else if(i % 5 == 0)
    {
      tab[i] = 2;
    }
    else
    {
      tab[i] = 0;
    }
  }
  }
}

int main()
{
  int array_of_elements[SIZE_OF_THE_ARRAY + 1];
  fill_the_array(array_of_elements);
  count_and_print_the_result(array_of_elements);
  
  encode_fizz_buzz(results);
  print_fizz_buzz(results);
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
  while(*given_array <= SIZE_OF_THE_ARRAY) // Correct the condition(what to point to when range ends?, use pointer instead of value)
  {
    if((*given_array % 3 == 0) && (*given_array % 5 == 0))
    {
      printf("FizzBuzz");
    }
    else if(*given_array % 3 == 0)
    {
      printf("Fizz");
    }
    else if(*given_array % 5 == 0)
    {
      printf("Buzz");
    }
    else
    {
      printf("%d", *given_array);
    }
    given_array++;
    printf("\n");
  }
}
