// etiopski sposób mnożenia dwóch liczb
// zad9 z podstrony pętle ze strony
// zadań z języków programowania

#include<stdio.h>

void take_input(int *a, int *b);
void go_forth_and_multiply(int a, int b);

int main()
{
  int multi_a, multi_b;
  take_input(&multi_a, &multi_b);
  go_forth_and_multiply(multi_a, multi_b);
}

void take_input(int *a, int *b)
{
  int i,j;
  i = j = 0;
  while(i <= 0 || j <= 0)
  {
    printf("Podaj dwie liczby naturalne dodatnie: ");
    scanf("%d %d", &i, &j);
  }
  if(i > j)
  {
    *a = j;
    *b = i;
  }
  else
  {
    *a = i;
    *b = j;
  }
}

void go_forth_and_multiply(int a, int b)
{
  int result;
  result = 0;
  while(a > 0)
  {
    if(a % 2 == 1)
    {
      result = result + b;
    }
    a = a>>1;
    b = b<<1;
  }
  printf("\nWynik mnozenia: %d\n", result);
}