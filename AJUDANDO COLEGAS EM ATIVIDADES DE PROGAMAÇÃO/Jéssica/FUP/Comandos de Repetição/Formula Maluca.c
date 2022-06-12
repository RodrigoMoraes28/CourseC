#include <stdio.h>
int main(){



    int i = 1 , num;
    float f;

    while(i <= 33){

        scanf("%d", num);


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
}
