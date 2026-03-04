#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Random Numbers and Game


int main() {
    
int i,num=0;
    
    //Run it 10 times.

    // You’ll see the same number every time.


    for ( i = 0; i < 10; i++)
    {
        num=rand();
        printf("%d.random number is: %d\n",i,num); 
    }
    

return 0;
}