#include <stdio.h>
#include "myMath.h" // Library that I created

// MATH OPERATIONS WITH FUNCTIONS


int main() {
    int a,b,variable;
    printf("***************\n");
    printf("*    MENU     *\n");
    printf("***************\n");
    printf("1.Min\n2.Max\n3.Kare Alma\n4.Kup Alma\n5.Mutlak Deger Alma\n");

    printf("Secmek istedigini matematiksel operasyonu seciniz:");
    scanf("%d", &variable);

    switch (variable)
    {
    case 1 :
        printf("\n Lutfen iki adet sayi giriniz:\n");
        scanf("%d%d",&a,&b);
        printf("Min: %d\n", min(a,b));
        break;
    case 2 :
        printf(" Lutfen iki adet sayi giriniz:\n");
        scanf("%d%d",&a,&b);
        printf("Max: %d\n", max(a,b));
        break;
    case 3 :
        printf(" Lutfen bir sayi giriniz:\n");
        scanf("%d",&a);
        printf("%d^2= %d\n",a,square(a));
        break;
    case 4 :
        printf(" Lutfen bir sayi giriniz:\n");
        scanf("%d",&a);
        printf("%d^3= %d\n",a,cube(a));
        break;
    case 5 :
         printf(" Lutfen bir sayi giriniz:\n");
        scanf("%d",&a);
        printf("|%d|=: %d\n",a, absolute(a));
        break;
    default:
    printf("1 ile 5 arasinda bir sayi girmelisiniz.");
    break;
    }



return 0;
}

int min(int a, int b){
    if(a<b){
        return a;
    }
else{
    return b;
}
}

int max(int a, int b){
    if(a>b){
        return a;
    }
else{
    return b;
}
}

int square(int a){
  
    return a*a;

}

int cube(int a){
  
    return a*a*a;

}
int absolute(int a){
  
if (a<0){
    return -a;
}
else{
    return a;
}
}