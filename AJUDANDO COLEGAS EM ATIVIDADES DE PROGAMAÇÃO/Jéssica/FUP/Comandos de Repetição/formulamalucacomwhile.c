#include <stdio.h>
int main(){



    int i = 1;
    float num;
    float f = 0;

    while(i <= 33){

        scanf("%f", num);


        if(i % 2 == 0){
            f += num/(i+2);
        }

        else{
            f += num/(i+3);
        }
        i++;
    }

        prinf("%.2f", f);

    return 0;



    /*
    O professor Fabio criou a seguinte formula maluca. Seja uma lista com 33 números, onde a1 é o primeiro elemento da lista, a2 o segundo e assim sucessivamente:



Repare que na fórmula, aos números de posição pares, dividimos pela posição + 2. Já aos números de posição impares, dividimos pela posição + 3

Implemente um programa que recebe uma lista de 33 números inteiros e calcule o valor da fórmula. Depois imprima.

Exemplos:

Entrada:
42
68
35
1
70
25
79
59
63
65
6
46
82
28
62
92
96
43
28
37
92
5
3
54
93
83
22
17
19
96
48
27
72
Saída:
120.51

    */
}
