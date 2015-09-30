#include <stdio.h>

int potencia_recursivo(int numero, int expoente){

  if (expoente == 0){
    return 1;
  }else{
    return numero * potencia_recursivo(numero, expoente - 1);
  }

}

int potencia_iterativo(int numero, int expoente){
  if (expoente == 0){
    return 1;

  }else{

    int resultado = numero;
    int i;

    for(i = 1; i < expoente; i++){
      printf("%d * %d = ", resultado, i);
      resultado = resultado * numero;
      printf("%d\n", resultado);
    }

    return resultado;
  }
}

int main(int argc, char *argv[]){
  int numero = 2;
  int expoente = 1;
  printf("%d elevado a %d eh %d\n", numero, expoente, potencia_iterativo(numero, expoente));//potencia iterativo
  printf("%d elevado a %d eh %d\n", numero, expoente, potencia_recursivo(numero, expoente));//potencia recursivo

  return 0;
}
