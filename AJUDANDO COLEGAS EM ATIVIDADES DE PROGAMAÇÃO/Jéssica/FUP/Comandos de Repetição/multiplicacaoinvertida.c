#include <stdio.h>
int main(){

    int qnt,num,f = 0; // se nao por o f = 0 nao sei pq mas da erro
    scanf("%d", &qnt);

    for(int i = qnt ; i >= 1 ; --i){
        scanf("%d", &num);
        f = f + num * i;
    }


    printf("%d", f);


    return 0;
}



 /*

 O professor Fabio criou a seguinte formula que ele chamou de multiplica��o invertida. Seja uma lista com n n�meros, onde a1 � o primeiro elemento da lista, a2 o segundo e assim sucessivamente:



Em outras palavras, o primeiro n�mero multiplicamos por n, o segundo n�mero por n-1, o terceiro por n-2 e assim sucessivamente at� multiplicarmos o �ltimo n�mero por 1.

Vejamos o exemplo para n = 5 com o n�meros da lista sendo 8 2 9 3 7. A formula ser� 8*5 + 2*4 + 9*3 + 3*2 + 7*1.

Implemente um programa que recebe uma lista de n n�meros inteiros, sendo o valor de n informado primeiro, e calcule o valor da f�rmula e depois imprima.

Exemplos:

Entrada:
5                //Valor de n, ou seja, quantidade de n�meros
8
2
9
3
7
Sa�da:
88

Entrada:
17                  //Valor de n, ou seja, quantidade de n�meros
17
27
17
38
32
15
41
37
22
13
22
15
10
16
3
24
25
Sa�da:
3667

 */




    return 0;
}
