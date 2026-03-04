#include <stdio.h>
#include <math.h>

//SOME MATH LIBRARY FUNCTIONS
//exp() : Exponantial function e=2,71.. e to the power of ...
//expn() : n to the power of ...
//pow(a,b) : a to the power of b ...
//sqrt(a) : Square root of a
//log(a) : Log of a

int main() {
    int a,b;
    // EXXPONANTIAL
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("e to the power of %d= %.02f\n", i, exp(i));
    }

    // N TO THE POWER OF
    for (i = 0; i < 5; i++)
    {
        printf("%d to the power of %d= %0.1f\n",2, i, exp2(i));
    }

    // A to the power of b

    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    printf("%d to the power of %d= %0.1f\n",a, b,pow(a,b));

    // SQUARE ROOT of A

     for (i = 1; i < 10; i++)
    {
        printf("Square root of %d= %0.1f\n", i, sqrt(i));
    }

    //LoG of a

      for (i = 1; i < 10; i++)
    {
        printf("LOG of %d= %0.1f\n", i, log(i));
    }

    

    return 0;
}