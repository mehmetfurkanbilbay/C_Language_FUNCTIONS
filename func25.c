#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// GETCHAR ve PUTCHAR FUNCTIONS
// Klavyeden bir TEK karakter okumak icin scanf yerine getch() kullanilabilir. 
// getch int ile tanimlanmistir. 
// int getch(void);
// getch() karaktere basar basmaz ekrana yazdirir.
// getchar() karaktere basip entere basinca ekrana yazdirir.


int main() {
    char myKey;
    printf("Lutfen bir tusa basiniz: ");
    myKey=getchar();
    printf("%c tusuna bastiniz. \n",myKey);
    printf("Karakterin ASCII kodu: %d", myKey);
return 0;
}

