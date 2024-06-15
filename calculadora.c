#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float num1, num2, Resu = 0;
    int escolha, programa = 0;
    while(programa == 0){
        
    
    printf("Ola, bem vindo a calculadora!\n");
    printf("Digite os  dois numeros e a operação desejada: \n");
    printf("numero 1 = ");
    scanf("%f", &num1);
    printf("\nnumero 2 = ");
    scanf("%f", &num2);
    printf("\nqual operacão desejada? \n");
    printf("1 (-)\n");
    printf("2 (+)\n");
    printf("3 (/)\n");
    printf("4 (*)\n");
    printf("5 (^)\n");
    
    scanf("%d", &escolha);
    
    switch(escolha){
        
        case 1:printf("\ncalculando...\n");
               Resu = num1 - num2;
               printf("o resultado é %0.2f\n", Resu);
               break;
               
        case 2:printf("\ncalculando...\n");
               Resu = num1 + num2;
               printf("o resultado é %0.2f\n", Resu);
               break;
        case 3:printf("\ncalculando...\n");
               Resu = num1 / num2;
               printf("o resultado é %0.2f\n", Resu);
               break;
        case 4:printf("\ncalculando...\n");
               Resu = num1 * num2;
               printf("o resultado é %0.2f\n", Resu);
               break;
        case 5:printf("\ncalculando...\n");
               Resu = pow(num1, num2);
               printf("o resultado é %0.2f\n", Resu);
               break;
        
        
        
    }
    printf("\nDeseja continuar na calculadora?\n");
    printf("\n0 para ficar\n1 para sair\n");
    scanf("%d", &programa);
    }
    
    
}




