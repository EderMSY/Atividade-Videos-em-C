#include<stdio.h>
#include<stdlib.h>

main(){
	char c[30], t;
	int n=0;
	
	printf("Digite o assunto ou tema a ser estudado: ");
	gets(c);
	
	printf("\nTente explica-lo a si mesmo.\n");
	for(;;){
		printf("\nVoce entendeu?(S/N)");
		scanf("\n%s", &t);
		switch(t){
			case 's':
				printf("\nParabens! Continue assim.");
				n=1;
				break;
			case 'n':
				printf("\nContinue estudando...\n");
				break;
			default:
				printf("\nResposta Inv�lida.");
				break;
		}
		if(n==1) break;
	}
	n=0;
	printf("\n\nEscreva e fale sobre o assunto em voz alta.\n");
	
	for(;;){
		printf("\nVoce entendeu todos os topicos relacionados ao tema?(S/N)");
		scanf("\n%s", &t);
		switch(t){
			case 's':
				printf("\nParabens! Voce dominou o tema.\n");
				n=1;
				break;
			case 'n':
				printf("\nEstude focando esse tema.\n");
				break;
			default:
				printf("\nResposta Inv�lida.\n");
				break;
		}
		if(n==1) break;
	}
}
