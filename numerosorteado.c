#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numerodasorte = 0;
    int numsecreto;
    
    srand (time(NULL));
    numsecreto = rand() % 200;
    
    printf("bem vindo\n");
    
    
   
    
    while (numerodasorte != numsecreto) {
        
        printf("digite o numero secreto: ");
        scanf("%d", &numerodasorte);
    
        printf("o numero digitado é: %d\n\n", numerodasorte);
        
        if (numerodasorte > numsecreto){
            printf("o numero secreto é menor!\n");
            
        }
        if (numerodasorte < numsecreto) {
            printf("o numero secreto é maior!\n");
            
        }
        
    }
    
    printf("você acertou!!!, %d era o numero secreto!", numsecreto);
    
}
