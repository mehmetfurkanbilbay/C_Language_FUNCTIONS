#include <stdio.h>

void myMessage(char name[],int yas){ 

printf("Merhaba ben %s yasim %d",name,yas); // 2 parametre gonderdik name ve yas, 
//name string oldugu icin %s kullandik, yas int oldugu icin %d kullandik

}

int main(int argc, char const *argv[]) // argc: argument count, 
                                        //argv: argument vector (array of strings)
{
   // myMessage("furkan"); you can not call the function like this because you have to send 2 parameters but you only send 1 parameter  
   // myMessage(28); // this is also wrong
    myMessage("Furkan", 28); 

    
    return 0;
}
