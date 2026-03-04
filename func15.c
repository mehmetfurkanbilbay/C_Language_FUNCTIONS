#include <stdio.h>
// GLOBAL DEGISKEN


void Increase();
void Decrease();
int x=7;

int main() {

printf("Bir sayi giriniz:");
scanf("\n%d", &x);
    
printf("x: %d\n", x);
Increase();
printf("x: %d\n", x);
Decrease();
Decrease();
Decrease();
Decrease();
printf("x: %d\n", x);

return 0;
}

void Increase(){
    
    x++;
}
void Decrease(){

    x--;
}