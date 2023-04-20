#include <stdio.h>

int main()
{ 
    int vet7583, vet [] ={1,2,3,4,5,6,7};
    
    for(vet7583=0; vet7583<7; vet7583++)
    
    printf("\nO endereço de cada vetor é: %p", vet+vet7583);
    
    return 0;
}