#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opmenu, oprotina, oprendimento, opStat, opprograma = 0;
    opprograma = 1;
    
    while(opprograma == 1){
    
    printf("Quais das ações de controle você deseja escolher\n1 - Rotina\n2 - Rendimentos\n3 - Stat\n");
    scanf("%d", &opmenu);
    
    switch (opmenu){
        
        case 1:printf("\n1 - Verificação de estoque trancado\n");
               printf("2 - Estocar de Acordo com a tabela\n");
               printf("3 - Verificação de VRAM\n");
               printf("Digite o numero desejado \n");
               scanf("%d", &oprotina);
               switch (oprotina){
                   case 1:printf("\na verificação de estoque é feita apartir de...\n");
                          printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                          scanf("%d", &opprograma);
                          break;
                   case 2:printf("\npara uma estocagem de acordo com a tabela é necessário...\n");
                          printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                          scanf("%d", &opprograma);
                          break;
                   case 3:printf("\npara a verificação de VRAM é necessário...\n");
                          printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - Sair\n");
                          scanf("%d", &opprograma);
                          break;
                   default:printf("\nEsse não é um numero válido, digite um numero de 1 a 3\n");
                          break;
                           
                          
                          
        
    }
    break;
        case 2:printf("\n1 - Mix\n2 - Batata\n3 - cobertura\n4 - leite\n5 - complementos\n");
               scanf("%d", &oprendimento);
               switch(oprendimento){
                   
                   
                   case 1:printf("\nO mix é mais conservado se mantido em baixa temperaturas...\n");
                          printf("deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                          scanf("%d", &opprograma);
                          break;
                   case 2:printf("\nAs batatas são conservadas em ambientes frios e manterem seu padrão e qualidade ouro\n");
                          printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                          scanf("%d", &opprograma);
                          break;
                   case 3:printf("\nA cobertura de padrão de qualidade ouro é fofa, cremosa, saborosa...\n");
                          printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                          scanf("%d", &opprograma);
                          break;
                   case 4:printf("O leite é conservado em ambientes gélidos e longe de pragas, para que não sejam infectados e...\n");
                          printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                          scanf("%d", &opprograma);
                          break;
                   case 5:printf("Os complementos são conservados para manterem a qualidade e padrão ouro...\n");
                          printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                          scanf("%d", &opprograma);
                          break;
                   default:printf("\nEsse não é um numero válido, digite um numero de 1 a 3\n");
                          break;
                   
                   
                   
                   
               }
        break;
        case 3:printf("\n1 - Carnes\n2 - pães\n3 - brindes\n4 - Queijo\n");
               scanf("%d", &opStat);
               
               switch(opStat){
                   
                   case 1:printf("A carne se mantem conservada em ambientes frios e longe de pragas...\n");
                          printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                          scanf("%d", &opprograma);
                          break;
                          
                         
                         
                    case 2:printf("Os pães podem ser mantidos em estufa e em ambientes quentes...\n");
                           printf("Deseja continuar no programa?\n1- para ir ao menu\n2 - sair do programa\n");
                           scanf("%d", &opprograma);
                           break;
                           
                    case 3:printf("Os brindes são uma parte essencial da empresa...\n");
                           printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                           scanf("%d", &opprograma);
                           break;
                          
                    case 4:printf("É essencial o queijo ser conservado em um ambiente longe de pragas e bem...\n");
                           printf("Deseja continuar no programa?\n1 - para ir ao menu\n2 - sair do programa\n");
                           scanf("%d", &opprograma);
                           break;
                    default:printf("Esse não é um numero válido, digite um numero de 1 a 3\n");
                           break;
                   
               }
               break;
               
               default:printf("\nEsse não é um comando válido, digite um numero de 1 a 3\n");
               break;
                   
                   
                   
               }
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
}





