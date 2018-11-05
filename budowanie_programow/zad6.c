// Program oblicza pierwiastek kwadratowy z liczby nieujemnej.

#include <stdio.h>
#include <math.h>

void wczytaj_dane(double* x);
void wypisz_wynik(double x);

int main(){
  double sr;
  wczytaj_dane(&sr);
  wypisz_wynik(sr);
  return 0;
}

void wczytaj_dane(double* x){
  printf("Program oblicza pierwiastek kwadratowy z liczby rzeczywistej.\n");
  printf("Podaj x: ");
  scanf("%lf", x);
}

void wypisz_wynik(double x){
  if(x >= 0){
    printf("Pierwiastek z liczby x = %lf wynosi %lf\n", x, sqrt(x));
  }
  else{
    printf("Liczba ujemna!\n");
  }
}