#include <stdio.h>

/* Referencias:
Learn code the hard way
http://c.learncodethehardway.org/book/ex6.html
http://c.learncodethehardway.org/book/ex8.html */

int main(int argc, char *argv[]){

    /*
    Para declarar uma variavel, voce precisa especificar qual eh o tipo dela, seu nome e o seu valor inicial
    */
    int idade = 25;// inteiro
    float dolar = 4.15;// float - decimal
    double fortuna = 56789.532;// double - decimal
    char letra_preferida = 'A';//caracter (dica: precisa ter aspas simples neste caso)
    char primeiro_nome[] = "Adam";//string (conjunto de caracteres)
    char ultimo_nome[] = "Levigne";//string (conjunto de caracteres)
    float notas[] = {8.1, 7.5, 9.0, 10.0, 0.87};
    char respostas_exercicios[] = {'a', 'b', 'c', ' ', 'b', 'b', 'e', ' ', 'a', 'c', 'd', '\0'};

    idade = 28;//mudando o valor da variavel
    /*
    Para exibir as variaveis voce precisa obedecer a formatacao de cada tipo
    %d para inteiros, %f para floats, %c para caracter e %s para strings
    */
    printf("Seu irmao tem %d anos.\n", idade);
    printf("A cotacao do dolar hoje esta valendo %f reais.\n", dolar);
    printf("Voce tem  %f reais na sua conta.\n", fortuna);
    printf("Letra preferida: %c.\n", letra_preferida);
    printf("Pode me chamar de %s.\n", primeiro_nome);
    printf("Ultimo nome: %s.\n", ultimo_nome);
    printf("Nome completo: %s %s.\n", primeiro_nome, ultimo_nome);
    printf("Notas da unidade:\n");
    int i = 0;
    for(i = 0; i < sizeof(float); i++) {
      printf("%f\n", notas[i]);
    }
    printf("Respostas dos exercicios: \"%s\"\n", respostas_exercicios);

    return 0;
}
