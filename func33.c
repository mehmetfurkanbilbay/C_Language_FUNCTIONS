#include <stdio.h>
#include <ctype.h>

//toupper() FUNCTION Uppercase
//tolower() FUNCTION Lowercase

int main() {
   printf("%c\n",toupper('a')); // a -> A
   printf("%d\n\n",toupper('a')); // A -> 65

   printf("%c\n",tolower('B')); // B -> b
   printf("%d\n",tolower('B')); // B -> 98

return 0;
}