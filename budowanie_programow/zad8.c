// Program wylicza sume, iloczyn, najmniejsza i najwieksza z trzech liczb calkowitych

#include <stdio.h>

void wczytaj_dane(int x[]);
void wypisz_wynik(int x[]);

int main(){

  int x[3];
  wczytaj_dane(x);
  wypisz_wynik(x);
  return 0;
}

void wczytaj_dane(int x[]){

  int i;
  printf("Wprowadz trzy liczby calkowite: ");
  
  for(i = 0; i < 3; ++i){
    scanf("%d", &x[i]);
  }
}

void wypisz_wynik(int x[]){

  int min, max, i;
  min = max = x[0];

  for(i = 0; i < 3; ++i){
    if(min > x[i]){
      min = x[i];
    }
    if(max < x[i]){
      max = x[i];
    }
  }

  printf("Suma wynosi: %d\n", x[0] + x[1] + x[2]);
  printf("Iloczyn wynosi: %d\n", x[0] * x[1] * x[2]);
  printf("Najmniejsza liczba to: %d\n", min);
  printf("Najwieksza liczba to: %d\n", max);
}