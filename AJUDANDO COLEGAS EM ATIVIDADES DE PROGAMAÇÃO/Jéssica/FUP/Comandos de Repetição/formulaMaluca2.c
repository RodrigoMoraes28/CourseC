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
    Somente fa�a essa quest�o se voc� fez a quest�o VALOR DA FORMULA MALUCA DO PROF FABIO.

Nessa nova vers�o, a quantidade de n�meros n�o ser� fixa em 33 (como na vers�o 1), mas ser� informada incialmente, ou seja, ser� din�mica. Seja n essa quantidade de n�meros.

Implemente um programa que recebe uma lista de n n�meros inteiros e calcule o valor da f�rmula. Depois imprima.

Exemplos:

Entrada:
21                     //Valor de n, ou seja, quantidade de n�meros
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
Sa�da:
119.14

    */



    return 0;
}
