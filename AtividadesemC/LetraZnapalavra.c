#include <stdio.h>
#include <string.h>

//João Carlos Barros Almeida da silva

int main(void) {
	
 	
	char nome[20];	
	printf("Digite uma palvra ou letra: ");
	scanf("%s", nome);
	
	int l = strlen(nome);
	for(int i = 0 ; i < l ; i++){
	    if(nome[i] == 'z' || nome[i] == 'Z'){
	        printf("No caractere %d ", i+1);
	        printf("da palavra '%s' ", nome);
	        printf("a letra '%c' esta contida \n", nome[i]);
	    }
	    else{
	        printf("A letra 'z' não está contida no caractere '%c' da palavra :" , nome[i]);
	        printf(" '%s' " ,nome);
	        printf("\n");
	    }
	}
 
	
 
	 
	return 0;
