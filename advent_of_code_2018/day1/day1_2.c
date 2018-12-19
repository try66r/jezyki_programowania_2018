#include <stdio.h>

int take_input(int *input_array);
int fill_the_res(int *input_array, int *res_array, int size, int repet);
int find_the_res(int *res_array, int size);
void print_the_res(int *res_array, int ptr);

int main()
{
  const int fixed_size = 1000, no_of_repet = 200;
  int partial[fixed_size], partial_real_size;
  int res[fixed_size * no_of_repet], res_real_size;
  int res_ptr;
  partial_real_size = take_input(partial);
  res_real_size = fill_the_res(partial, res, partial_real_size, no_of_repet);
  res_ptr = find_the_res(res, res_real_size);
  print_the_res(res, res_ptr);
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

int fill_the_res(int *input_array, int *res_array, int size, int repet)
{
  int i;
  res_array[0] = 0;
  for(i = 1; i < size * repet; ++i)
    res_array[i] = res_array[i - 1] + input_array[(i - 1) % size];
  return i;
}

int find_the_res(int *res_array, int size)
{
  int best_ptr = size;
  for (int i = 0; i < best_ptr; ++i)
  {
    for (int j = i + 1; j < best_ptr; ++j)
    {
      if (res_array[j] == res_array[i] && j < best_ptr)
        best_ptr = j;
    }
  }
  if(best_ptr != size)
    return best_ptr;
  else
    return 0;
}

void print_the_res(int *res_array, int ptr)
{
  if(ptr)
    printf("\nSought frequency: %d.\n\n", res_array[ptr]);
  else
    printf("\nNo repetition.\n\n");
}