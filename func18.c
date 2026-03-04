#include <stdio.h>
float celcius;
float fahrenheit;
// FAHRENHEIT TO CELCIUS Or VICE VERSA
float celtofah(float);
float fahtocel(float);
int main() {
  printf("***********************\n\n");
  printf("CELCIUS OR FAHRENHEIT\n\n");
  printf("***********************\n");

  int secim;
  float deger;
  

  printf("Lutfen Secim Yapiniz: (1-2)");
  scanf("%d", &secim);
switch (secim)
{
case 1:
    printf("\nCelcius sicaklik degerini giriniz:");
    scanf("%f", &celcius);
    deger=celtofah(celcius);
    printf("\n%0.2f Celcius = %0.2f Fahrenheit",celcius,deger);
    break;
case 2:
    printf("\nFahrenheit sicaklik degerini giriniz:");
    scanf("%f", &fahrenheit);
    deger=fahtocel(fahrenheit);
    printf("%0.2f Fahrenheit = %0.2f Celcius",fahrenheit,deger);
    break;
default:
printf("Lutfen 1 ya da 2 tuslamasi yapiniz:");
    break;;
}


return 0;
}

float celtofah(float fahrenheit){

    return ((celcius * 9)/5) + 32;
}

float fahtocel(float celcius){

    return ((fahrenheit - 32)*5) / 9;
}