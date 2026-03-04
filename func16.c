#include <stdio.h>
void BirlikCevir(int);
void OnlukCevir(int);

int main() {
    int sayi=0; // sayi=0 yaptik cunku while dongusune girsin diye
    int d1,d2,d3,d4;

    while (sayi!=-1) {
        printf("Lutfen bir sayi giriniz (-1 cikis): ");
        scanf("%d", &sayi);
        if (sayi==-1) break;
        if (sayi<0 || sayi>9999) {
            printf("Lutfen 0-9999 arasi giriniz.\n\n");
            continue;
        }

        d1=sayi%10;           // birler
        d2=(sayi%100)/10;     // onlar
        d3=(sayi%1000)/100;   // yuzler  
        d4=sayi/1000;         // binler

        if (sayi==0) {
            printf("Sifir\n\n");
            continue;
        }

        if (d4!=0) {
            if (d4!=1) BirlikCevir(d4);
            printf(" Bin");
        }

        if (d3!=0) {
            if (d4!=0) printf(" ");
            if (d3!=1) BirlikCevir(d3);
            printf(" Yuz");
        }

        if (d2!=0) {
            if (d4!=0 || d3!=0) printf(" ");
            OnlukCevir(d2);
        }

        if (d1!=0) {
            if (d2!=0 || d3!=0 || d4!=0) printf(" ");
            BirlikCevir(d1);
        }

        printf("\n\n");
    }

    return 0;
}

void BirlikCevir(int sayi){
    switch (sayi){
        case 1: printf("Bir"); break;
        case 2: printf("Iki"); break;
        case 3: printf("Uc"); break;
        case 4: printf("Dort"); break;
        case 5: printf("Bes"); break;
        case 6: printf("Alti"); break;
        case 7: printf("Yedi"); break;
        case 8: printf("Sekiz"); break;
        case 9: printf("Dokuz"); break;
        default: break;
    }
}

void OnlukCevir(int sayi){
    switch (sayi){
        case 1: printf("On"); break;
        case 2: printf("Yirmi"); break;
        case 3: printf("Otuz"); break;
        case 4: printf("Kirk"); break;
        case 5: printf("Elli"); break;
        case 6: printf("Altmis"); break;
        case 7: printf("Yetmis"); break;
        case 8: printf("Seksen"); break;
        case 9: printf("Doksan"); break;
        default: break;
    }
}
