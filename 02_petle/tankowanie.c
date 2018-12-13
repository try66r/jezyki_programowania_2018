// Kierowcy interesują się zużyciem paliwa 
// do swoich samochodów.Napisz program, 
// który będzie pobierał z pliku liczbę,
// kilometrów z licznika samochodu, liczbę 
// zatankowanych litrów paliwa i cenę za 
// litr paliwa dla każdego tankowania.
// ---------------------------------------
// Po wczytaniu danych program powinien obliczyć 
// i wypisać dla każdego tankowania(za wyjątkiem pierwszego) :
// liczbę przejechanych kilometrów, 
// liczbę litrów potrzebnych na przejechanie 100 km
// oraz koszt przejechania 100 km.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *in_handle;
  char bufor[BUFSIZ];
  unsigned int each[100], diff[100], total_distance = 0, i = 0;
  double x[100], y[100], total_x = 0, total_y = 0;
  in_handle = fopen(argv[1], "r");
  while (fgets(bufor, BUFSIZ, in_handle) != NULL)
  {
    if(bufor[0] == '-' || bufor[0] == '\n')
      continue;

    sscanf(bufor, "%u %lf %lf", &each[i], &x[i + 1], &y[i + 1]);  
    if(i > 0)
    {
      diff[i] = each[i] - each[i - 1];
      total_distance += diff[i];
      x[i] = 100.00 * x[i] / diff[i];
      total_x += x[i];
      y[i] = x[i] * y[i];
      total_y += y[i];
      printf("--> %d %.2f %.2f\n", diff[i], x[i], y[i]);
    }
    i++;
  }
  printf("\nTotally: %d %.2f %.2f\n\n", total_distance, total_x, total_y);
  fclose(in_handle);
  return EXIT_SUCCESS;
}