#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main() {
int score=100,number,guess;

printf("1 ile 100 arasinda bir sayi tuttum.\n");
printf("Tahmin Et!\n");
printf("Tahmininiz: ");

srand(time(NULL));
number=rand()%100+1;

while (guess !=-1)// Begining of While
{
scanf("%d", &guess);

if(guess==number){
    printf("\033[1mTebrikler! Dogru bildiniz. Skorunuz: %d\033[0m", score);
    break;
}// end of first if

if(number != guess){
    score-=10;
}//end of second if

if (guess < number && guess > 0){
    printf("Daha \033[1mBuyuk\033[0m bir sayi giriniz:");
}// end of third if

if(guess > number && guess > 0){
    printf("Daha \033[1mKucuk\033[0m bir sayi giriniz:");
}// end of fourth if

if (guess<0 || guess >100){
    printf("Gecersiz bir sayi girdiniz");
    continue;
}// end of fifth if

if (score==0)
{
    printf("Oyun bitti. Skorunuz: %d",score); break;
}// end of sixth if


}// end of while


return 0;
}