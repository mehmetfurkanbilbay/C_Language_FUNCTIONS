#include <stdio.h>

int newfunc(int x){


return x + 5;
}


int main(int argc, char const *argv[])
{
    int x=12;
    printf("Dondurulen sayi: %d\n",newfunc(x));
    
    return 0;
}