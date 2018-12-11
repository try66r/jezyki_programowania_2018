// The spreadsheet consists of rows of apparently-
// random numbers.To make sure the recovery process
// is on the right track, they need you to calculate
// the spreadsheet’s checksum.For each row, determine
// the difference between the largest value and
// the smallest value; the checksum is the sum of all
// of these differences.

#include <stdio.h>

void welcome();
void take_input(char *destination, int size_of_array);
int compute_result(char *source);
void print_the_result(int result);

int main()
{
  const int size_of_array = 101;
  char array_of_characters[size_of_array];
  int result;
  welcome();
  take_input(array_of_characters, size_of_array);
  result = compute_result(array_of_characters);
  print_the_result(result);
}

void welcome()
{
  printf("Welcome to spreadsheet's checksum!\n");
  printf("Please enter digits separated by spaces.\n");
  printf("When you are done, press Enter and Ctrl+D afterwards.\n");
  printf("\nYour input:\n\n");
}

void take_input(char *destination, int size_of_array)
{
  int c, i = 0;
  while (i < (size_of_array - 1) && (c = getchar()) != EOF)
  {
    if(c == ' ')
      continue;
    else
    {
      destination[i] = c;
      ++i;
    }
  }
  destination[i] = EOF;
}

int compute_result(char *source)
{
  int i, min, max, final_result;
  final_result = i = 0;

  while(source[i] != EOF)
  {
    min = max = source[i] - '0';
    while(source[i] != '\n')
    {
      if (min > source[i] - '0')
        min = source[i] - '0';
      if (max < source[i] - '0')
        max = source[i] - '0';
      ++i;
    }
    final_result += max - min;
    ++i;
  }

  return final_result;
}

void print_the_result(int result)
{
  printf("\nThe checksum of your input is: %d\n", result);
}