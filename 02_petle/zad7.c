// Napisz program, który ze stdin wczyta 6
// liczb rzeczywistych do tablicy, a następnie
// wypisze liczbę liczb dodatnich w niej zawartych.

#include<stdio.h>

void take_input(double *user_input);
void positive_ones(double *user_input);

int main()
{
  double array_of_elements[6];
  take_input(array_of_elements);
  positive_ones(array_of_elements);
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

void positive_ones(double *user_input)
{
  int i, p;
  p = 0;
  for (i = 0; i < 6; i++)
  {
    if(user_input[i] > 0)
      p++;
  }
  printf("\nIlosc liczb dodatnich: %d\n", p);
}