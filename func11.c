#include <stdio.h>

//RECURSION FUNCTION

int SumNumber(int i);

int main() {
    int result=SumNumber(5); // 5 degeri borudan girer
    printf("Sonuc: %d\n", result);

return 0;
}

int SumNumber(int i){ // Borudan cikti
    if (i>0) { 
    return i + SumNumber(i-1); //1.  5 + SumNumber(4) Tekrar cagirdi function'i
    }                          //2.  5 + 4 + SumNumber(3)
                               //3.  5 + 4 + 3 + SumNumber(2)   
                               //4.  5 + 4 + 3 + 2 + SumNumber(1)
                               //5.  5 + 4 + 3 + 2 + 1 + SumNumber(0)
                               
    else { // SumNumber(0) else'e girer                       
        return 0; // ve SumNumber(0)=0 olur
    }

}
