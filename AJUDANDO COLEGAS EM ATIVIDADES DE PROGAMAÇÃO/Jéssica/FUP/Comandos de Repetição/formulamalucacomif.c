#include <stdio.h>
int main (){

 float num;
 float f = 0;

    for (int i = 1; i <= 33; i++){
    scanf("%f", &num);

    if(i % 2 == 0){
        f += num/(i+2);
    }
    else{
        f += num/(i + 3);
    }
    }
    printf("%.2f", f);
}
/*
    O professor Fabio criou a seguinte formula maluca. Seja uma lista com 33 n�meros, onde a1 � o primeiro elemento da lista, a2 o segundo e assim sucessivamente:



Repare que na f�rmula, aos n�meros de posi��o pares, dividimos pela posi��o + 2. J� aos n�meros de posi��o impares, dividimos pela posi��o + 3

Implemente um programa que recebe uma lista de 33 n�meros inteiros e calcule o valor da f�rmula. Depois imprima.

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
Sa�da:
120.51

    */
