#include <stdio.h>

/*
Um programa pode fazer diversas coisas. Para organizar melhor seu codigo, facilitar a manutencao e chamar cada parte do codigo adequadamente voce pode utilizar funcoes.
Funcoes sao trechos de codigo dentro de um programa.

Referencia: http://c.learncodethehardway.org/book/ex14.html
*/

//Objetivo: verificar se com uma idade informada o usuario pode votar ou nao

//Dividimos em duas funcoes: uma para verificar a idade e outra para imprimir o resultado

//A funcao pode_votar retorna um valor inteiro, por isso em sua declaracao tem o tipo int
int pode_votar(int idade){
  int resultado = 0;//0 para Nao e 1 para Sim
  if (idade > 15){
    resultado = 1;
  }
  return resultado;
}

//A funcao imprime_resultado nao retorna nenhum valor, apenas executa comandos de saida do resultado, por isso eh declarada como void
void imprime_resultado(int resultado){
  if (resultado == 1){
    printf("Pode votar\n");
  }else{
    printf("Nao vai dar :(\n");
  }

}

//Na funcao main apenas fazemos a chamada das funcoes que iremos utilizar
int main(int argc, char *argv[]){

    int resultado = pode_votar(25);
    imprime_resultado(resultado);

    return 0;
}
