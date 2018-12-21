#include <stdio.h>

void take_input(char *dest_arr, int size);
int count_word_size(char *sour_arr);
int count_vect_size(char *sour_arr);
void make_str(char *source, char *destination, int w_size, int curr_pl);
int compare(char *bas_str, char *com_str, int w_size);
void finalize(char *one_str, char *two_str, char *res, int w_size);
void divide_str(char *sour_arr, char *res, int w_size, int v_size);

int main()
{
  const int word_size = 50;
  const int vect_size = 500;

  char input_array[word_size * vect_size];
  int real_word_size, real_vect_size;
  char final_result[word_size];

  take_input(input_array, word_size * vect_size);
  real_word_size = count_word_size(input_array);
  real_vect_size = count_vect_size(input_array);
  divide_str(input_array, final_result, real_word_size, real_vect_size);
  printf("%s", final_result);
}

void take_input(char *dest_arr, int size)
{
  char c;
  int i = 0;
  while ((c = getchar()) != EOF && i < size)
  {
    dest_arr[i] = c;
    ++i;
  }
  dest_arr[i] = '\n';
  ++i;
  dest_arr[i] = '\0';
}

int count_word_size(char *sour_arr)
{
  int w_size = 0;
  while (sour_arr[w_size] != '\n')
    ++w_size;
  return w_size;
}

int count_vect_size(char *sour_arr)
{
  int i = 0, v_size = 0;
  while (sour_arr[i] != '\0')
  {
    if (sour_arr[i] == '\n')
      ++v_size;
    ++i;
  }
  return v_size;
}

void make_str(char *source, char *destination, int w_size, int curr_pl)
{
  for(int i = 0; i < w_size; ++i)
    destination[i] = source[curr_pl * (w_size + 1) + i];
}

int compare(char *bas_str, char *com_str, int w_size)
{
  int result = w_size;
  for(int i = 0; i < w_size; ++i)
  {
    if(bas_str[i] == com_str[i])
    {
      --result;
    }
  }
  return result;
}

void finalize(char *one_str, char *two_str, char *res, int w_size)
{
  int i = 0;
  int j = 0;
  while(i < w_size && j < w_size)
  {
    if(one_str[j] == two_str[j])
    {
      res[i] = one_str[j];
      ++i;
      ++j;
    }
    else
      ++j;
  }
  res[i] = '\n';
}

void divide_str(char *sour_arr, char *res, int w_size, int v_size)
{
  char base_word[w_size], comp_word[w_size];
  int br;

  for(int i = 0; i < v_size - 1; ++i)
  {
    make_str(sour_arr, base_word, w_size, i);
    for(int k = i + 1; k < v_size; ++k)
    {
      make_str(sour_arr, comp_word, w_size, k);
      if((br = compare(base_word, comp_word, w_size)) == 1)
        break;
    }
    if(br == 1)
      break;
  }
  finalize(base_word, comp_word, res, w_size);
}