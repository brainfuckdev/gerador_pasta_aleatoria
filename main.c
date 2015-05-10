#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int main(void){
    int i, numRand, num;
    char *ch;

    numRand = rand()%20 + 15;
    
    //ponteiro para o arquivo
    FILE *ponteiro;
    
    //abre o arquivo com a configura��o "w+"
    ponteiro = fopen("arquivo.txt", "w+");
    
    //semeador de n�meros randomicos
    srand(time(NULL));
    
    //aloca espa�o
   	ch = ((char *) malloc (sizeof(int))); 
	if (ch == NULL)
    	printf("Mem�ria cheia...\n");
        
    //atribui valores randomicos � matriz
    for (i = 0; i <= numRand; i++){
        ch[i] = rand()%25 + 65;
        //adciona o texto gerado ao arquivo
        fprintf(ponteiro, "%c", ch[i]);
    }
    
    //mostra os valores gerados pelo rand()
    for (i = 0; i <= numRand; i++){
        printf("%c", ch[i]);
    }
    printf("\n");
    
    free(ch);
    ch = NULL;

    //fecha arquivo
    fclose(ponteiro);
    //getch();
    
    return 0;
}
