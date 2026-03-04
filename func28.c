#include <stdio.h>
#include <ctype.h>


// ISALPHA() FUNCTION  A-Z  a-z  

int main() {
    int number;
    printf("Lutfen 0-255 arasinda bir sayi giriniz:");
    scanf("%d", &number);
    printf("\nGirdiginiz karakter: %c\n", number);
    if (isalpha(number)){ // A-Z  a-z  
        printf("Correct");
    }
    else
    {
        printf("Wrong");
    }
    


return 0;
}