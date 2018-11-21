// Napisz program, który wczyta ze stdin
// 6 liczb rzeczywistych do tablicy, a następnie
// wyszuka i wypisze największą i najmniejszą
// liczbę umieszczoną w tej tablicy.

#include<stdio.h>

void take_input(double *user_input);
void min_max(double *user_input);

int main()
{
  double array_of_elements[6];
  take_input(array_of_elements);
  min_max(array_of_elements);
}

void take_input(double *user_input)
{
  int i;
  printf("Podaj 6 liczb rzeczywistych: ");
  for (i = 0; i < 6; i++)
  {
    scanf("%lf", &user_input[i]);
  }
}

void min_max(double *user_input)
{
  int i;
  double min, max;
  min = max = user_input[0];
  for(i = 0; i < 6; i++)
  {
    if(min > user_input[i])
      min = user_input[i];
    if(max < user_input[i])
      max = user_input[i];
  }
  printf("\nminimum to: %lf", min);
  printf("\nmaximum to: %lf\n", max);
}