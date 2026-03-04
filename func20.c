#include <stdio.h>
#include <math.h>

// MATH LIB FUNCTIONS PART 2


//cbrt();    double cbrt(double arg)                    Cube Root Function                       
//asin       double asin(double arg)                    Arcsine           
//asinh      double asinh(double arg)                   inverse hyperbolic sine        
//atan       double atan(double arg)                    Arctangent        
//atan2      double atan2(double y, double x)           Returns the arctangent of y/x           
//atanh      double atanh(double arg)                   inverse hyperbolic tangent          
//acos()     double acos(double arg)                    Arccosine         
//acosh()    double acosh(double arg)                   inverse hyperbolic cosine           
//cos()      double cos(double arg)                     Cosine  
//cosh()     double cosh(double arg)                    Hyperbolic cosine          
//sin        double sin(double arg)                     Sine         
//sinh       double sinh(double arg)                    Hyperbolic sine          
//tan()      double tan(double arg)                     Tangent
//tanh()     double tanh(double arg)                    Hyperbolic Tangent
//ceil()     double ceil(double arg)                    Rounds upward
//floor()    double floor(double arg)                   Rounds downward
//fabs()     double fabs(double arg)                    Absolute value for double
//abs()      int abs(int arg)                           Absolute value for integers
//fdim()     double fdim(double x, double y)            If x > y → returns x - y   Otherwise → returns 0
//fma()      double fma(double x, double y, double z)   (x * y) + z
//fmax()     double fmax(double x, double y)            Returns the larger value.
//fmin()     double fmin(double x, double y)            Returns the smaller value.
//fmod()     double fmod(double x, double y)            Returns the remainder of x / y for floating-point numbers.

// Critical Technical Notes

//Trigonometric functions require radians.
// 1.Degree to radian conversion:
radian = degree * M_PI / 180.0;

// 2. Floating-point equality is unsafe:
 if (a == b)  // unreliable

 // Better
 if (fabs(a - b) < 1e-9)
