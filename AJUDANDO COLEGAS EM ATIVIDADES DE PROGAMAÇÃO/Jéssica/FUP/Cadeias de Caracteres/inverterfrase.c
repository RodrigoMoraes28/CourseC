#include <stdio.h>
int main(){

    char s[201], sAux[201];
    printf("Digite sua frase , que será invertida após isso");
    scanf("%[^\n]", &s); // lendo o vetor de string (frase ,tanto faz)

    int i,j,n,k;
    for(k = 0 ; s[k] != '\0' ; k++){ //aqui serve para eu pegar o tamanho da string, ele le ate eu dar enter e armazena cada caractere no "k", dps pego o k e coloco seu valor na variavel n
                                    //ps veja q n criei o iterador aqui dentro do for , mas fora, pq senao ele iria desaparecer da memoria apos o for ter sido executado
        n = k;                      
    }

    j = n;                //o j recebe o valor total do tamanho da string menos o '\0'
                           
    for(i = 0 ; i < n ; i++){
        sAux[i] = s[j];     //copiando o valor  
        j = j - 1;          //o j vai diminuindo o valor sempre pq ele ta pegando o ultimo caractere
                            // da frase "s" e colocando desde a ultima posição até a primeira,
                            // por isso tem o decremento aq
    }
    sAux[i] = '\0';         //coloco dnv o '\0' no aux q tirei qnd fiz o primeiro for

    printf("\n");
    printf("Entrada de dados : %s\n" , s);
    printf("Saida : %s\n" , sAux); 
    printf("\n");


    return 0;
}