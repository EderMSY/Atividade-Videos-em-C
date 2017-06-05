//Eder Macedo da Silva - 2216104254
//Dan Phillip D. de Oliveira - 2217114612
//Laercio Ariel Macedo - 2216101782

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int MAX, a, i, j, aux , num, vet[100];

void bubble(int vet[]);
void insert(int vet[],int MAX);
void selection(int vet[]);
void lista();

void insert(int vet[],int MAX){
	
	for (j=2; j<MAX; j++){
		aux  = vet[j];
		i = j-1;
    	while (aux < vet[i]){
		    vet[i+1] = vet[i];
            --i;
        }
        vet[i+1] = aux;
    }	
}

void bubble(int vet[]){
	
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			if(vet[j]<vet[i]){
				aux=vet[j];
				vet[j]=vet[i];
				vet[i]=aux;
				}
			}
		}
	}


void selection(int vet[]){
	
	for(i=0;i<MAX;i++){	
		num=i;
		for(j=0;j<MAX-1;j++){
			while(vet[j]<vet[i]){
				aux=vet[j];
				vet[j]=vet[i];
				vet[i]=aux;
				}
			}
		}
	}

void lista(){
	
	int opc=0;
	srand(time(NULL));
	
	do{
		system("cls");
		printf("1 - Exibir lista de numeros");
		printf("\n2 - Usar metodo Bubble");
		printf("\n3 - Usar metodo Insert");
		printf("\n4 - Usar metodo Selection");
		printf("\n5 - Limpar lista");
		printf("\n0 - Fechar programa\n");
		scanf("%d",&opc);
	switch(opc){
	
		case 1:
				if(i>=MAX){
					printf("Lista cheia.");
					getch();
				}
				else{
					for(i=0;i<MAX;i++){
						vet[i]=rand()%1000;
						printf("Vetor: %d\n\n",vet[i]);
					}	
					printf("Lista Gerada.");
					getch();
				}
					break;	
		case 2:
				for(i=0;i<MAX;i++){
					printf("Vetor: %d\n\n",vet[i]);
				}
				bubble(vet);
				printf("Lista ordenada:\n\n");
				for(i=0;i<MAX;i++){
					j--;
					printf("Vetor: %d\n\n",vet[i]);
					}
					printf("\n\nMude de habito, use outro metodo de ordenacao.\n");
					getch();
					break;
		case 3:
				for(i=0;i<MAX;i++){
					printf("Vetor: %d\n\n",vet[i]);
				}
				insert(vet,MAX);
				printf("Lista ordenada:\n\n");
				for(i=0;i<MAX;i++){
					printf("Vetor: %d\n\n",vet[i]);
				}
				printf("\n\nMude de habito, use outro metodo de ordenacao.\n");
				getch();
				break;
		case 4:
				for(i=0;i<MAX;i++){
					printf("Vetor: %d\n\n",vet[i]);
				}
				printf("Lista ordenada:\n\n");
				selection(vet);
				for(i=0;i<MAX;i++){
					printf("Vetor: %d\n\n",vet[i]);
				}
				printf("\n\nMude de habito, use outro metodo de ordenacao.\n");
				getch();
				break;
		case 5:
				for(i=0;i<MAX;i++){
					vet[i]=0;
				}
				printf("\nLista zerada.");
				getch();
				i=0;
				break;
		}	
	}while(opc!=0);
}
main(){
	MAX=10;
	lista();
	return 0;
	
}









