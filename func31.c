#include <stdio.h>
#include <ctype.h>

// isupper() FUNCTION  A-Z

int main() {
    int number;
    printf("Lutfen 0-255 arasinda bir sayi giriniz:");
    scanf("%d", &number);
    printf("\nGirdiginiz karakter: %c\n", number);
    if (isdigit(number)){ // A-Z  
        printf("Correct");
    }
    else
    {
        printf("Wrong");
    }

return 0;
}