#include <stdio.h>
#include <string.h>

//João Carlos Barros Almeida da silva

int main(void) { 
 	
	char frase[101], sAux[101];	
	printf("Digite uma frase: ");
	scanf(" %[^\n]s", &frase);
	
	int i;
	int l = strlen(frase); // vai pegar a frase ate o tamanho dela, evitando acumular lixo na memoria da frase caso nao escreva a quantidade total de caracteres 
	
	int j = l - 1; 
	
 	for(i = 0 ; i < l ; i++){ 
 	    sAux[i] = frase[j];
 	    j = j - 1;
 	}
 	
 	sAux[i] = '\0';
    
    printf("A frase invertida ficou : %s\n", sAux);
	return 0;
}