#include <stdio.h>
#include <math.h>

// MATH LIB FUNCTIONS PART 3

/*
isfinite(x);  Returns true if x is: not NaN not infinity                      
isgreater(x,y);         
isgreaterequal(x,y);
isinf(x);     True if x is +∞ or −∞.
isless(x,y);
islessequal(x,y);
isnan(x);      True if x is Not-a-Number.
double remainder(double x, double y);
double round(double x);     Rounds to nearest integer.
double rint(double x);      Rounds according to current rounding mode (IEEE-754).
signbit(x);     Returns true if the sign bit is set.
*/


int main() {
   
// isfinite() Usage
double x=19, y=0.12, z=0.00/0.00;

printf(" %0.2f degeri tanimli bir deger%s\n",x, isfinite(x) ? "dir.\n" : " degildir.\n");
printf(" %0.2f degeri tanimli bir deger%s\n",y, isfinite(y) ? "dir.\n" : " degildir.\n");
printf("'%0.2f' degeri tanimli bir deger%s\n",z, isfinite(z) ? "dir.\n" : " degildir.\n");


// isgreater() isless() Usage

double a=7.01, b=7.31;

printf("\n%0.2f sayisi %0.2f sayisindan%s",a,b,isgreater(a,b)? " buyuktur.":" kucuktur." );

// isnan() Usage 0.00/0.00

// x=14.00/0.00 + INFINITY yani Tanimlidir verir
// x=0.00/0.00  NaN yani Tanimsizdir verir

printf("\n\n'%.2f' sayisi%s",x,isnan(x) ? " tanimsizdir" : " tanimlidir.");
printf("\n\n'%.2f' sayisi%s",y,isnan(y) ? " tanimsizdir" : " tanimlidir.");
printf("\n\n'%.2f' sayisi%s",z,isnan(z) ? " tanimsizdir" : " tanimlidir.");

// remainder() Usage

double k=20.12, l=6.1, result;
result=remainder(k,l);
printf("\n\nResult: %0.2f\n",result);

// round() ~ rint() Usage

double t=7.25, s=7.99, u=7.49;
double roundd=round(u);
printf("\n\nRounded values: %0.2f\n", roundd);

// signbit() Usage

double q=-8.54, w= 8.475;
printf("\n\n%0.2f degeri negatif bir deger%s\n",q,signbit(q)?"dir":" degildir");
printf("\n\n%.2f degeri negatif bir deger%s\n",w,signbit(w)?"dir":" degildir.");



return 0;
}