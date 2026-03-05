#include <stdio.h>

void swap(int *a, int *b);

int main() {
    int a = 3, b = 5;

    printf("Before: a=%d b=%d\n", a, b);

    swap(&a, &b); // &a  → adres alır
                  // *a  → adrese git, içindeki değeri al

    printf("After:  a=%d b=%d\n", a, b);

    return 0;
}

void swap(int *a, int *b) {
    int temp = *a;   // a'nın gösterdiği değeri al
    *a = *b;         // b'nin değerini a'ya yaz
    *b = temp;       // temp'i b'ye yaz
}