#include <stdio.h>
#include <string.h>
#include <locale.h>



int main(void) {

    setlocale(LC_ALL,"");
	char frase[100];
	printf("Contagem das vogais!\n  ");
	printf("Digite uma frase: ");
	scanf(" %[^\n]s", frase);

	int l = strlen(frase);

	int cont=0;
    printf("a : ");
    int i;
	for( i = 0 ; i < l ; i++){
	 	if(frase[i] == 'a' || frase[i] == 'A' || frase[i] == 'á' || frase[i] == 'à' || frase == 'ã' || frase == 'â'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);


	cont=0;
    printf("e : ");
	for(i = 0 ; i < l ; i++){
	 	if(frase[i] == 'e' || frase[i] == 'E'|| frase[i] == 'é' || frase[i] == 'è' || frase == 'ê'|| frase[i] == 'É'|| frase[i] == 'È'|| frase[i] == 'Ê'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);

    cont=0;
    printf("i : ");
	for(i = 0 ; i < l ; i++){
	 	if(frase[i] == 'i' || frase[i] == 'I'|| frase[i] == 'í' || frase[i] == 'ì' || frase == 'î'||frase[i] == 'Ì'||frase[i] == 'Í'||frase[i] == 'Î'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);

	cont=0;
    printf("o : ");
	for(i = 0 ; i < l ; i++){
	 	if(frase[i] == 'o' || frase[i] == 'O'|| frase[i] == 'ó' || frase[i] == 'ò' || frase == 'õ' || frase == 'ô' || frase[i] == 'Ó'|| frase[i] == 'Ò'|| frase[i] == 'Õ'||frase[i] == 'Ô'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);

	cont=0;
    printf("u : ");
	for(i = 0 ; i < l ; i++){
	 	if(frase[i] == 'u' || frase[i] == 'U'||frase[i] == 'ú'||frase[i] == 'ù'||frase[i] == 'û'||frase[i] == 'Ú'||frase[i] == 'Ù'||frase[i] == 'Û'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);


	return 0;
}
