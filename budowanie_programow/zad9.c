// Program oblicza pierwiastek kwadratowy od liczby poczatkowej do liczby koncowej w podanym kroku

#include <stdio.h>
#include <math.h>

void wczytaj_dane(double *x, double *y, double *z);
void wypisz_wynik(double x, double y, double z);

int main(){

  double x, y, z;
  wczytaj_dane(&x, &y, &z);
  wypisz_wynik(x, y, z);
  return 0;
}

void wczytaj_dane(double *x, double *y, double *z){
  
  printf("Podaj limit dolny: ");
  scanf("%lf", x);
  printf("Podaj limit gorny: ");
  scanf("%lf", y);
  printf("Podaj krok: ");
  scanf("%lf", z);
}

void wypisz_wynik(double x, double y, double z){
  
  double i;
  for(i = x; i <= y; i = i + z){
    printf("%.4lf  %.4lf\n", i, sqrt(i));
  }
}