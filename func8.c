#include <stdio.h>

// IC ICE FUNCTION

int Topla(int a, int b){

    return a+b;
}
int Cikar(int a, int b){
    return a-b;

}

int main() {
int islem=Cikar(Topla(5,7),4);
printf("Sonuc:%d\n", islem);

return 0;
}