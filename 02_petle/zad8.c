// Napisz program rozmieszczający poniższe 
// wzory oddzielnie jeden pod drugim. 
// Użyj pętli for do generowania wzorów. 
// Do wypisywania gwiazdek należy użyć 
// instrukcji putchar('*') (powodującej
// wyświetlanie ich obok siebie). 
// Uwaga: dwa ostatnie wzory wymagają, 
// by każdy wiersz zaczynał się od odpowiedniej
// liczby spacji.

#include<stdio.h>

void growing_cascade();
void lessening_cascade();
void inverted_growing_cascade();
void inverted_lessening_cascade();

int main()
{
  growing_cascade();
  lessening_cascade();
  inverted_growing_cascade();
  inverted_lessening_cascade();
}

void growing_cascade()
{
  int i, j;
  for(i = 1; i <= 4; i++)
  {
    for(j = 1; j <= i; j++)
    {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');
}

void lessening_cascade()
{
  int i, j;
  for (i = 4; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      putchar('*');
    }
    putchar('\n');
  }
  putchar('\n');
}

void inverted_growing_cascade()
{
  int i, j;
  for (i = 1; i <= 4; i++)
  {
    for (j = 4; j >= 1; j--)
    {
      if(j > i)
      {
        putchar(' ');
      }
      else
      {
        putchar('*');
      }
    }
    putchar('\n');
  }
  putchar('\n');
}

void inverted_lessening_cascade()
{
  int i, j;
  for (i = 4; i >= 1; i--)
  {
    for (j = 4; j >= 1; j--)
    {
      if (j > i)
      {
        putchar(' ');
      }
      else
      {
        putchar('*');
      }
    }
    putchar('\n');
  }
  putchar('\n');
}