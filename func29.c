#include <stdio.h>
#include <ctype.h>

// isdigit() FUNCTION   0-9


int main() {
    int number;
    printf("Lutfen 0-255 arasinda bir sayi giriniz:");
    scanf("%d", &number);
    printf("\nGirdiginiz karakter: %c\n", number);
    if (isdigit(number)){ // 0-9
        printf("Correct");
    }
    else
    {
        printf("Wrong");
    }
    


return 0;
}