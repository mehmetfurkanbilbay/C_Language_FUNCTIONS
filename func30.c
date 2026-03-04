#include <stdio.h>
#include <ctype.h>



int main() {
    int number;
    printf("Lutfen 0-255 arasinda bir sayi giriniz:");
    scanf("%d", &number);
    printf("\nGirdiginiz karakter: %c\n", number);
    if (islower(number)){ //  a-z  
        printf("Correct");
    }
    else
    {
        printf("Wrong");
    }

return 0;
}