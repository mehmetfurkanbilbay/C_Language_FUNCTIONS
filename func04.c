#include <stdio.h>


void allNumbers(int myNumber[6]){ // array parametresi, array parametreleri pointer olarak gonderilir, bu yuzden array parametreleri fonksiyonun icinde degistirilebilir

    for (int i = 0; i < 6 ; i++)
    {
        printf("%d \n", myNumber[i]);
    }
    
    
}

int main()  
{
    int myNumber[6]= {10,20,30,40,50,60};
    allNumbers(myNumber);

    return 0;
}

