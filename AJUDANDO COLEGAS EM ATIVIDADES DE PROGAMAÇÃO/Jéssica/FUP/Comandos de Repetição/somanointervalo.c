#include <stdio.h>
int main(){

    int n1,n2,num, soma = 0;
    scanf("%d %d", &n1,&n2);

    for(int i = n1 ; i <= n2 ; i++){
        soma = soma + i;
    }

    printf("%d", soma);


    return 0;
}
