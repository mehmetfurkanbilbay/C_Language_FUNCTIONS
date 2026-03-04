#include <stdio.h>

// LOCAL VE GLOBAL DEGISKENLER 


void Print();
int main() {
    int superVariable=7;
    Print();

return 0;
}

void Print(){
    // int superVariable=7; Burda olsaydi hata vermezdi cunku lokal
    //<-   printf(" %d\n", superVariable); 
    // Supervariable global degil o yuzden hata vericek

}