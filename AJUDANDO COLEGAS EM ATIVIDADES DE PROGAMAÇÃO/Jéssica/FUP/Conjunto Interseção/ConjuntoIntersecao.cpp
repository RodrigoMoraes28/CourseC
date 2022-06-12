#include <stdio.h>
#include <stdlib.h> //system pause
int main(){


    int n1;
    scanf("%d" ,&n1);

    int vetor1[n1];
    for(int i = 0 ; i < n1 ; i++){
        scanf("%d", &vetor1[i]);
    }

    int n2;
    scanf("%d" ,&n2);

    int vetor2[n2];
    for(int i = 0 ; i < n2 ; i++){
        scanf("%d", &vetor2[i]);
    }


    //tamaho do vetor interseção : precisa ser no maximo o menor entre os 2 vetores mostrados
    int n3;
    if(n1 > n2){
        n3 = n2;
    }

    else{
        n3 = n1;
    }

    int vetor3[n3];

    int k = 0;
    for(int i = 0 ; i < n1 ; i++){
        for(int j = 0 ; j < n2; j++)
            if(vetor1[i] == vetor2[j]){
                    vetor3[k] = vetor1[i];
                    k++;
                    break;
                }
            }

    //lendo as posições ocupadas dentro do vetor intereseção
    for(int i = 0 ; i < k ; i++){
        printf("%d ", vetor3[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
