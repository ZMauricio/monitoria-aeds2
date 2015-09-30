#include <stdio.h>

int fatorial_recursivo(int numero){

  if (numero == 0 || numero == 1){
    return 1;
  }else{
    return numero * fatorial_recursivo(numero - 1);
  }

}

int fatorial_iterativo(int numero){
  if (numero == 0 || numero == 1){
    return 1;
  }else{

    int resultado = numero;
    int i ;
    for(i = numero - 1; i != 0 ; i--){
      printf("%d * %d = ", resultado, i);
      resultado = resultado * i;
      printf("%d\n", resultado);
    }

    return resultado;

  }

}

int main(int argc, char *argv[]){
  int numero = 4;
  printf("O fatorial de %d eh %d\n", numero, fatorial_iterativo(numero));//fatorial iterativo
  printf("O fatorial de %d eh %d\n", numero, fatorial_recursivo(numero));//fatorial recursivo

  return 0;
}
