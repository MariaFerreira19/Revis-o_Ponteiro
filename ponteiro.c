#include <stdio.h>
int main ()

{
    int num, valor;
    int *p;
        
    num=55;
    p=&num;
        
    valor=*p;
        
        printf("Valor: %d\n", valor);
        printf("Endereço para onde o ponteiro aponta: %p\n", p);
        printf("Valor da variável apontada: %d\n",*p);
        
}