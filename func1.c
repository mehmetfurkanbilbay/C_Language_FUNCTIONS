// FUNCTIONS

// Bir Function, yalnizca cagrildiginda calisan bir kod blogudur
// Parametre olarak bilinen verileri bir function'a iletebiliriz.
// Functionlar, belirli eylemleri gerceklestirmek icin kullanilir ve kodu yeniden kullanmak icin onemlidir; Kodu bir kez tanimlayin ve bircok kez kullanin

#include <stdio.h>


int main()
{
// Ana function'da geriye return olarak 0 degerini dondurdugunde programdan cikmasi gerektigini anliyor o yuzden int ile tanimliyoruz 
myMessage();
    return 0;
}


// Herhangi bisey dondurmuyosa tam sayi vs int yerine void kullaniriz

void myMessage(){

printf("Now I can write a function");
}
