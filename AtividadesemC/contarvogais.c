#include <stdio.h>
#include <string.h>
#include <locale.h>

//Professor: Oberdan Rocha pinheiro
//Jo�o Carlos Barros Almeida da silva

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
	 	if(frase[i] == 'a' || frase[i] == 'A' || frase[i] == '�' || frase[i] == '�' || frase == '�' || frase == '�'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);


	cont=0;
    printf("e : ");
	for(i = 0 ; i < l ; i++){
	 	if(frase[i] == 'e' || frase[i] == 'E'|| frase[i] == '�' || frase[i] == '�' || frase == '�'|| frase[i] == '�'|| frase[i] == '�'|| frase[i] == '�'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);

    cont=0;
    printf("i : ");
	for(i = 0 ; i < l ; i++){
	 	if(frase[i] == 'i' || frase[i] == 'I'|| frase[i] == '�' || frase[i] == '�' || frase == '�'||frase[i] == '�'||frase[i] == '�'||frase[i] == '�'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);

	cont=0;
    printf("o : ");
	for(i = 0 ; i < l ; i++){
	 	if(frase[i] == 'o' || frase[i] == 'O'|| frase[i] == '�' || frase[i] == '�' || frase == '�' || frase == '�' || frase[i] == '�'|| frase[i] == '�'|| frase[i] == '�'||frase[i] == '�'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);

	cont=0;
    printf("u : ");
	for(i = 0 ; i < l ; i++){
	 	if(frase[i] == 'u' || frase[i] == 'U'||frase[i] == '�'||frase[i] == '�'||frase[i] == '�'||frase[i] == '�'||frase[i] == '�'||frase[i] == '�'){
	 		printf("*");
			cont++;
		}
	}
	 printf(" (%d)\n", cont);


	return 0;
}
