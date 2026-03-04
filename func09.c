#include <stdio.h>

// YAZILIMCILARIN TERCIH ETTIGI YAZIM SEKLI

void Message(); // Main'in isini kolaylastirmak icin

int main() {
    int variable;    
    Message(variable);
return 0;
}

void Message(int variable){ // DECLARATION
    printf(" %d\n", variable); // DEFINITION

}