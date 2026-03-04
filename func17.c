#include <stdio.h>

// RECURSIVE FUNCTION ORNEK
int Faktoriyel(int a);
int main() {
int a=1;
int fact;
char cikis;

while(a>=0){
printf("Faktoriyeli alinacak sayiyi giriniz:");
scanf("%d", &a);
if (a<0){
printf("Gecersiz bir sayi girdiniz:");
break;
}
fact = Faktoriyel(a);
printf("\n%d!=%d\n", a, fact);

}

return 0;
}

int Faktoriyel(int a){
    if (a == 0) 
        return 1;
    else
        return a * Faktoriyel(a - 1);
}

