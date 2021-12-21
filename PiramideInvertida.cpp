/************************************************************/
/* Programador: Lívio Lopes                                 */
/* Nome do programa:                                        */
/* Descrição do programa:                                   */
/* Data criação:                                            */
/*                                                          */
/* Versão: 1.0                                              */
/************************************************************/

#include <stdio.h>
#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
	
	int i,j,k,valor;
	
	setlocale(LC_ALL,"");
		
	puts("***************************");
	puts("***************************");
	puts("* O Programa irá Imprimir *");
	puts("* Pirâmide em diversos *");
	puts("**      Formatos        **");
	puts("***************************");
	puts("***************************");
	puts("Precione qualquer tecla para iniciar...");
	getch();
	
	system("cls");
	
	printf("\nIntroduza um valor: ");
	scanf("%d",&valor);
	
	system("cls");
	
	puts("(A)");
	puts("");
	for(i=1;i<=valor;i++) {
		for(j=1;j<=valor-i;j++){
		printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",k);
		}
	puts("");
	}
	puts("");
	puts("(B)");
	puts("");
	for(i=valor;i>=1;i--) {
		for(j=1;j<=valor-i;j++){
		printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",k);
		}
	puts("");
	}
	puts("");
	puts("(C)");
	puts("");
    for(i=1;i<=valor;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    puts("");
    }
    puts("");
    puts("(D)");
    puts("");
    for(j=valor;j>=1;j--){
        for(i=1;i<=j;i++){
        printf("%d",i);
        }
    puts("");
    }
	puts("");
    puts("(E)");
    puts("");
    for(j=valor;j>=1;j--){
        for(k=1;k<=valor-j;k++){
        printf(" ");
        }
        for(i=1;i<=j;i++){
        printf("%d",i);
        }
    puts("");
    }
    puts("");
    puts("(F)");
    puts("");
    for(i=1;i<=valor;i++){
        for(k=1;k<=valor-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
    puts("");    
	}
	puts("");
	puts("(G)");
	puts("");
	for(i=valor;i>=1;i--) {
		for(j=1;j<=valor-i;j++){
		printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d ",k);
		}
	puts("");
	}
	puts("");	
	puts("Fim da Operação.");
	puts("Precione qualquer tecla para encerrar a aplicação...");
	getch();
	return 0;
	
}
