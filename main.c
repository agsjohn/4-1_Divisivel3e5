#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  int num, div, cont, cont2, x;
  do{
    printf("Digite um número: ");
    scanf("%i", &num);
    cont = num % 3;
    cont2 = num % 5;
    if(cont == 0 && cont2 == 0){
      printf("O número é divisível por 3 e por 5\n");
    }
    else{
      printf("O número não é divisível por 3 e por 5\n");
    }
  }while(num != 0);
}