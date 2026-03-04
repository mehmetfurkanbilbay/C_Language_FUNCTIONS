#include <stdio.h>
#include <ctype.h>

//isspace() FUNCTION    only space

int main() {

    int number;
    printf("Lutfen 0-255 arasinda bir sayi giriniz:");
    scanf("%d", &number);
    printf("\nGirdiginiz karakter: %c\n", number);
    if (isspace(number)){ //  space 
        printf("Correct");
    }
    else
    {
        printf("Wrong");
    }
    

return 0;
}