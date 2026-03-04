#include <stdio.h>
// TIP SORGULAMA FUNCTION
// KUTUPHANESI
#include <ctype.h>

// isalnum() A-Z  a-z  0-9

int main() {
    int number;
    printf("Lutfen 0-255 arasinda bir sayi giriniz:");
    scanf("%d", &number);
    printf("\nGirdiginiz karakter: %c\n", number);
    if (isalnum(number)){ // A-Z  a-z  0-9
        printf("Correct");
    }
    else
    {
        printf("Wrong");
    }
    

return 0;
}