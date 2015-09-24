#include <stdio.h>

/*
Para receber os valores informados pelo usuario, utilizamos a funcao scanf()
Como parametro, passamos pra essa funcao qual o tipo de informacao vamos receber e qual a variavel ira guardar esta informacao

scanf("%f %c %d", &variavel_decimal, &variavel_caracter, &variavel_inteiro);
*/
int main(int argc, char *argv[]){

  printf("--- Informacoes Pessoais ---\n");

  //Recebendo um inteiro
  printf("Qual a sua idade? ");
  int idade;
  scanf("%d", &idade);

  printf("Voce so tem %d anos.\n", idade);


  //Recebendo strings
  printf("Qual o seu nome? ");
  char nome_completo[20];
  scanf(" %[^\n]s", nome_completo);//utilizando esses parametros na formatacao, serao lidos os valores ate que o usuario tecle enter (nova linha)

  printf("Continue estudando, %s!", nome_completo);

  return 0;
}
