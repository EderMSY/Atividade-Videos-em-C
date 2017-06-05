//Eder Macedo da Silva - 2216104254
//Dan Phillip D. de Oliveira - 2217114612
//Laercio Ariel Macedo - 2216101782
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void notas();
void bubble(/*char vet[]*/int vet1[]);

//struct{

char trf[10][30];
int imp[10];

//}


int i=0, n, j, aux;
char aux2[30];

void bubble(/*char vet[],*/int vet1[]){
	
	for(n=0;n<i;n++){
		for(j=0;j<i;j++){
			if(vet1[j]>vet1[n]){
				aux=vet1[j];
				vet1[j]=vet1[n];
				vet1[n]=aux;
				
				strcpy(aux2,trf[j]);
				strcpy(trf[j],trf[n]);
				strcpy(trf[n],aux2);
			}// if
		}// 2 for
	}//for
}// bubble
	
void notas(){
	int opc=0;
	char tarefa[30];
	
	do{
	printf("1 - Adicionar tarefa\n");
	printf("2 - Listar tarefas\n");
	printf("0 - Fechar \n");	
	scanf("%d",&opc);
	
		switch(opc){
		case 1:
			printf("Digite uma tarefa a ser realizada:");
			fflush(stdin);
			gets(tarefa);
			setbuf(stdin, NULL);
			strcpy(trf[i], tarefa);
			printf("Digite o nivel de importancia da tarefa (de 1 a 5, sendo 1 a mais importante e 5 a menos importante):\n");
			scanf("%d", &imp[i]);
			i++;
		//	getch();
			break;
		case 2:
			bubble(imp);
			for(n=0;n<i;n++){
				j--;
				printf("Tarefa: %s Importancia: %d\n\n",trf[n],imp[n]);
			}
			system("pause");
			break;
		}// switch	
		system("cls");
	}while(opc!=0);// do while
}// notas

main(){
	i=0;
	notas();
}
