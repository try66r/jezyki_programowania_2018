#include <stdio.h>

int take_input(int *input_array);
int count_the_result(int *input_array, int size);

int main()
{
  const int fixed_size = 1000;
  int data[fixed_size], real_size, result;
  real_size = take_input(data);
  result = count_the_result(data, real_size);
  printf("%d\n", result);
}

int take_input(int *input_array)
{
  char buffer[BUFSIZ];
  int i = 0;

  while (fgets(buffer, BUFSIZ, stdin) != NULL)
  {
    sscanf(buffer, "%d", &input_array[i]);
    ++i;
  }
  return i;
}

int count_the_result(int *input_array, int size)
{
  int i, result;
  result = 0;
  for(i = 0; i < size; ++i)
    result += input_array[i];
  return result;
}