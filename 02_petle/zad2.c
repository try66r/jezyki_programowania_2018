// Napisz program wyświetlający szachownicę

#include<stdio.h>

void print_chessboard();

int main()
{
  print_chessboard();
}

void print_chessboard()
{
  int i, j;
  for(i = 0; i < 8; i++)
  {
    if(i % 2 == 0)
    {
      for(j = 0; j < 8; j++)
      {
        printf("* ");
      }
    }
    else
    {
      for (j = 0; j < 8; j++)
      {
        printf(" *");
      }
    }
    printf("\n");
  }
}