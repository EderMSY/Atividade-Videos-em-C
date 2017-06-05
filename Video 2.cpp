//Eder Macedo da Silva - 2216104254
//Dan Phillip D. de Oliveira - 2217114612
//Laercio Ariel Macedo - 2216101782

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

 
void operafila();

 
int main(int argc, char *argv[]) 
{

    operafila();
    return 0;
    
}
 
void operafila(){
	int x, n=5, i, p=0;
char a[4][30]={"Estudar para seminario", "Estudar para prova", "Limpar a casa", "Preparar refeicao"};

	
    int opc = 3;

    do
    {
        system("cls");
        printf("TAREFAS A SEREM REALIZADAS:  \n\n");
        
        printf("1 - %s\n",a[0]);
		printf("2 - %s\n",a[1]);
		printf("3 - %s\n",a[2]);
		printf("4 - %s\n",a[3]);
		
		printf("\nOPCOES.\n\n");
		printf("1 - Realizar tarefa\n");
		printf("2 - Listar tarefas\n");
		printf("3 - Fechar programa\n\n");
		
		printf("Selecione uma opcao: ");
		scanf("\n%d", &opc);
		 
       
        switch (opc)
        {
            case 1: // Exclui uma tarefa da lista
            printf("\nEscolha a tarefa que foi concluida:");
            scanf("%d", &i);
                for(x=i-1;x<n;x++){
                	strcpy(a[x],a[x+1]);
				}	
                printf("\nTarefa %d realizada\n",i);
                p++;
                if(p!=3)
                printf("\nPausa de 5 minutos.\n\n");
                else
                printf("\nPausa de 15 a 30 minutos.\n\n");
                n--;
                getch();
                break;
            
            case 2: // Listar tarefas
                for(x=0;x<n;x++){
                 printf("%s\n\n", a[x]);	
            	}
                getch();
                break;    
        }
    }while( opc != 3); 
}
