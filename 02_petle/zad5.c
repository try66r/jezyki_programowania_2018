// Napisz program, który wczyta ze stdin
// 6 liczb całkowitych do tablicy, a następnie 
// wypisze zawartość tej tablicy od początku i od końca.

#include<stdio.h>

void take_input(int *user_input);
void forward_backward(int *user_input);

int main()
{
  int array_of_elements[6];
  take_input(array_of_elements);
  forward_backward(array_of_elements);
}

void take_input(int *user_input)
{
  int i;
  printf("Podaj 6 liczb calkowitych: ");
  for(i = 0; i < 6; i++)
  {
    scanf("%d", &user_input[i]);
  }
}

void forward_backward(int *user_input)
{
  int i;
  printf("\nOd poczatku:\n");
  for(i = 0; i < 6; i++)
  {
    printf("%d ", user_input[i]);
  }
  printf("\nOd konca:\n");
  for (i = 5; i >= 0; i--)
  {
    printf("%d ", user_input[i]);
  }
  printf("\n");
}