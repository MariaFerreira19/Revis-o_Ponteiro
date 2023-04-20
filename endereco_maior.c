#include <stdio.h>

int main()
{
    
  int a7583,b7583;
    
    if(&a7583 > &b7583)
        printf("O endereço de a7583 - %p - é maior que o endereço de b7583: %p\n", &a7583, &b7583);
    else
        printf("O endereço de b7583 - %p - é maior que o endereço de a7583: %p\n", &b7583, &a7583);

    return 0;
}
