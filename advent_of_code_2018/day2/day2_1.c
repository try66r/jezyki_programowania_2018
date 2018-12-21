#include <stdio.h>
#include <string.h>

const int alphabet_size = 26;

void fill_with_0(int *arr, int size);
void take_input(char *dest_arr, int size);
int count_word_size(char *sour_arr);
int count_vect_size(char *sour_arr);
void compare(int *two, int *three, char *str, int w_size, int curr_vec_pos);
void divide_str(int *two, int *three, char *str, int w_size, int v_size);
int count_result(int *two, int *three, int v_size);

int main()
{
  const int word_size = 50;
  const int vect_size = 500;

  int twos[vect_size], threes[vect_size];
  char input_array[word_size * vect_size];
  int real_word_size, real_vect_size;
  int result;

  fill_with_0(twos, vect_size);
  fill_with_0(threes, vect_size);
  take_input(input_array, word_size * vect_size);
  real_word_size = count_word_size(input_array);
  real_vect_size = count_vect_size(input_array);
  divide_str(twos, threes, input_array, real_word_size, real_vect_size);
  result = count_result(twos, threes, real_vect_size);
  printf("Checksum: %d\n", result);
}

void fill_with_0(int *arr, int size)
{
  for(int i = 0; i < size; ++i)
    arr[i] = 0;
}

void take_input(char *dest_arr, int size)
{
  char c;
  int i = 0;
  while((c = getchar()) != EOF && i < size)
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
  while(sour_arr[w_size] != '\n')
    ++w_size;
  return w_size;
}

int count_vect_size(char *sour_arr)
{
  int i = 0, v_size = 0;
  while(sour_arr[i] != '\0')
  {
    if(sour_arr[i] == '\n')
      ++v_size;
    ++i;
  }
  return v_size;
}

void compare(int *two, int *three, char *str, int w_size, int curr_vec_pos)
{
  int temp;
  int helping_three_arr[alphabet_size];
  int helping_more_arr[alphabet_size];

  fill_with_0(helping_three_arr, alphabet_size);
  fill_with_0(helping_more_arr, alphabet_size);

  for(int i = 0; i < w_size; ++i)
  {
    temp = 1;
    for(int j = i + 1; j < w_size; ++j)
    {
      if(str[i] == str[j])
        ++temp;
    }
    if(temp > 3)
      helping_more_arr[str[i] - 'a'] = 1;
    if((temp == 3) && (helping_more_arr[str[i] - 'a'] == 0))
    {
      three[curr_vec_pos] = 1;
      helping_three_arr[str[i] - 'a'] = 1;
    }
    if ((temp == 2) && (helping_three_arr[str[i] - 'a'] == 0) && (helping_more_arr[str[i] - 'a'] == 0))
      two[curr_vec_pos] = 1;
  }
}

void divide_str(int *two, int *three, char *str, int w_size, int v_size)
{
  char word[w_size];

  for (int i = 0; i < v_size; ++i)
  {
    for (int j = 0; j < w_size; ++j)
    {
      word[j] = str[(i * (w_size + 1) + j)];
    }
    compare(two, three, word, w_size, i);
  }
}

int count_result(int *two, int *three, int v_size)
{
  int temp_2, temp_3;
  temp_2 = temp_3 = 0;
  for(int i = 0; i < v_size; ++i)
  {
    if(two[i] == 1)
    {
      ++temp_2;
    }
    if(three[i] == 1)
    {
      ++temp_3;
    }
  }
  return temp_2 * temp_3;
}