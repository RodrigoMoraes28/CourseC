#include <stdio.h>
int main(){

    int n1,n2,num, soma_impar = 0, soma_par = 0;
    scanf("%d %d", &n1,&n2);

    for(int i = n1 ; i <= n2 ; i++){

        if(i % 2 == 0){
        soma_par = soma_par + i;
    }
        else{
            soma_impar = soma_impar +i;
        }

    }
    printf("%d %d", soma_par,soma_impar);


    return 0;
}
