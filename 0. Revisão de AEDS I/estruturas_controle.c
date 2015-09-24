#include <stdio.h>

/*
if: estrutura que nos permite validar se uma condicao eh verdadeira e executar um comando a partir dela
tambem permite decidir o que pode ser feito se uma condicao nao foi atendida

muitas vezes temos muitos caminhos a escolher, como em opcoes em menus de sistemas ou alternativas em uma prova
para estes casos podemos usar o
*/
int main(int argc, char *argv[]){

  printf("Qual a sua idade? ");
  int idade;
  scanf("%d", &idade);

  //if simples
  if (idade == 10){
    printf("Voce tem uma decada de existencia.\n");
  }

  //if com else
  if (idade >= 18){
    printf("Vamos invadir a la boite.\n");
  } else{
    printf("Melhor ficar em casa, novinho(a).\n");
  }

  //if aninhado
  if (idade >= 18){
    printf("Voce tem obrigacao de votar.\n");
  } else  if (idade >= 16 && idade < 18){
    printf("O seu voto eh opcional.\n");
  } else {
    printf("Relaxe, o coracao. Um dia voce votara.\n");
  }

  //switch
  switch (idade/10){
    case 0 : printf("Crianca"); break;
    case 1 : printf("Adolescente"); break;
    case 2 : printf("Jovem"); break;
    case 3 : printf("Adulto"); break;
    case 4 : printf("Coroa"); break;
    default : printf("Aposentado");
  }

  return 0;
}
