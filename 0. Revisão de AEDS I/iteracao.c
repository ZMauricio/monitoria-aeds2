#include <stdio.h>

/*
As estruturas de iteracao sao uteis para percorrer valores em uma variavel ou para executar um mesmo comando repetidamente
*/
int main(int argc, char *argv[]){
  int eh_tres = 0;
  //Objetivo: enquanto nao for igual a tres, continua executando
  /*
  O While eh uma estrutura de iteracao que verifica se uma instrucao eh verdadeira. Caso nao seja, continua executando
  */
  while(eh_tres != 3){
    printf("Nao eh o 3, eh o %d\n", eh_tres);
    eh_tres++;
  }

  //Objetivo: pede que o usuario digite um numero natural. Se nao digitar, entra no loop ate que o usuario digite um numero natural
  int numero_natural;
  /*
  A instrucao eh executada uma vez e so entra no laco (loop) se nao obedecer a condicao
  O loop so eh encerrado quando a condicao eh atendida
  */
  do {
    printf("Digite um numero natural:\n");
    scanf("%d", &numero_natural);
  }while(numero_natural < 0);

  //Objetivo: percorre de 0 ate 10 informando se eh um numero par ou nao
  int i = 0;
  /*
  O for eh uma estrutura que utiliza uma variavel para controlar o seu laco. Essa variavel eh inicializada com um valor e pode incrementar ou decrementar enquanto a condicao for atendida
  for (inicializacao da variavel ; condicao ; iteracao: incrementa ou decrementa)
  */
  for (i = 0; i < 11; i++){
    if (i % 2 == 0){
      printf("#%d Par\n", i);
    }else{
      printf("#%d Impar\n", i);
    }
  }



  return 0;
}
