#include <stdio.h>
int main(){


    float num;
    float soma = 0;
    int qnt;
    scanf("%d" , &qnt);


    for(int i = 1 ; i <= qnt ; ++i){
        scanf("%f", &num);


        if(i % 2 == 0){
            soma += num/(i+2);

        }
        else{
            soma += num/(i+3);
        }

    }
        printf("%.2f", soma);

   /*
    Somente faça essa questão se você fez a questão VALOR DA FORMULA MALUCA DO PROF FABIO.

Nessa nova versão, a quantidade de números não será fixa em 33 (como na versão 1), mas será informada incialmente, ou seja, será dinâmica. Seja n essa quantidade de números.

Implemente um programa que recebe uma lista de n números inteiros e calcule o valor da fórmula. Depois imprima.

Exemplos:

Entrada:
21                     //Valor de n, ou seja, quantidade de números
12
83
57
91
26
25
87
78
70
44
35
78
69
69
92
97
84
29
28
27
72
Saída:
119.14

    */



    return 0;
}
