#include <stdio.h>
int main(){


    int n,f = 0;
    scanf("%d", &n);

    for(int i = 1 ; i < n ; i++){
        for(int j = n ; i < j ;j--){
            f = f + j*i;
            }
        }

        printf("%d", f);


    return 0;
}
