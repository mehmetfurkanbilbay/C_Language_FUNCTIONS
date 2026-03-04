#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

// SRAND()

int main() {
    // Seed once. Generate many numbers.

    int i, num;
    srand(time(NULL));
  for ( i = 0; i < 10; i++)
    {
        num=rand();
        printf("%d.random number is: %d\n",i,num); 

        // num=rand() % 10 ; Generates between 0-9
        // num=rand() % 100 ; Generates between 0-99
        // num=rand() % 1000 ; Generates between 0-999

        //If you dont want 0, for instance between 1-99
        // num=rand()%99+1  ; 

    }
return 0;
}