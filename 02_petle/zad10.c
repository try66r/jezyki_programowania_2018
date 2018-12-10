// The captcha requires you to review a sequence
// of digits(your puzzle input) and find the sum
// of all digits that match the next digit in 
// the list.The list is circular, so the digit
// after the last digit is the first digit in the list.

#include <stdio.h>

void take_input(int *destination, int size);
int compute_the_result(int *source);
void print_out_the_result(int result);

int main()
{
  const int size_of_array = 101;
  int array_of_digits[size_of_array];
  int result;
  printf("Welcome to captcha.\n\nPlease insert a number: ");
  take_input(array_of_digits, size_of_array);
  result = compute_the_result(array_of_digits);
  print_out_the_result(result);
}

void take_input(int *destination, int size)
{
  int c, i;
  for(i = 0; i < (size - 1) && (c = getchar()) != '\n' && c != EOF; ++i)
    destination[i] = c - '0';
  destination[i] = -1;
}

int compute_the_result(int *source)
{
  int i, temp;
  int result = 0;

  if(source[0] == -1 || source[1] == -1)
    return result;
// I am not sure whether only 1 digit adds
// to the result, possibly to correct

  temp = source[0];
  for(i = 1; source[i] != -1; ++i)
  {
    if(temp == source[i])
      result += temp;
    temp = source[i];
  }
  
  if(temp == source[0])
    result += temp;
  
  return result;
}

void print_out_the_result(int result)
{
  printf("The captcha equals to: %d\n", result);
}