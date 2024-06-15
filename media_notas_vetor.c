#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, cont = 0;
    int total = 0;
    float total2 = 0;
    int i, j = 0;
    int notas[4];
    printf("hola, vossa majestado digite 3 notas do BURRO do aluno, obrigado!: \n");
    while(cont < 3){
        
        cont++;
        printf("digite a %d° nota: ", cont);
        scanf("%d", &notas[cont]);
       
        
        
        
    }
    for(i = 1; i < 4; i++){
        
        printf("\n%d° nota: %d\n", i, notas[i]);
        total = total+notas[i]; 
        
    }
    
    printf("\na nota total de todas as notas somadas sao: %d", total);
    total2 = total/3;
    printf("\n e a media aritmética das notas sao: %.2f", total2);
    

}
