#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<string.h>


void Conta_Vogais(char v[]){

int i,j;
int cont;

char vogais[] = "aeiou";

j = 0;

do{
	
cont = 0;

printf("%c: ",vogais[j]);
	
for(i=0;v[i] != NULL;i++){
	
if(v[i] == vogais[j]){

printf("*");
cont++;

}
}

printf(" (%d)\n",cont);
j++;

}while(vogais[j] != NULL);
}



int main(void){
	
char *frase = (char *)malloc(sizeof(char));

if(frase == NULL)

exit(1);

printf("Informe sua mensagem:\n");
scanf("%[^\n]s",frase);

printf("\n");

Conta_Vogais(frase);

return 0;

}