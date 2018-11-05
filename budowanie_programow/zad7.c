// Program oblicza pierwiastek kwadratowy i odwrotność liczby.

#include <stdio.h>
#include <math.h>

void wczytaj_dane(double* x);
void wypisz_wynik(double x);

int main(){

  double a;
  wczytaj_dane(&a);
  wypisz_wynik(a);
  return 0;
}

void wczytaj_dane(double* x){
  
  printf("Podaj liczbe, ktorej pierwiastek kwadratowy\ni odwrotnosc chcesz obliczyc: ");
  scanf("%lf", x);
}

void wypisz_wynik(double x){

  if(x > 0){
    printf("\nPierwiastek liczby %lf wynosi: %lf\na odwrotnosc: %lf\n", x, sqrt(x), 1.0 / x);
  }
  else if(x == 0){
    printf("\nPierwiastek liczby %lf wynosi: %lf\na odwrotnosc nie istnieje w tym punkcie.\n", x, sqrt(x));
  }
  else{
    printf("\nOdwrotnosc liczby %lf wynosi: %lf\na pierwiastek istnieje dla nieujemnych.\n", x, 1.0 / x);
  }
}