#include <stdio.h>
#include <stdlib.h>

int main()
{
    
   int num, num1, num2, resu, laco, cont = 1;
 
   do{
       
       printf("digite 3 numeros, mas nao use o 0\n");
       printf("primeiro numero: \n");
       scanf("%d", &num);
       printf("segundo numero: \n");
       scanf("%d", &num1);
       printf("terceiro numero: \n");
       scanf("%d", &num2);
       
       if(num1 == 0 | num1 == 0 | num2 == 0){
           
       
       printf("todos os numeros sao 0\n\n");
       laco = 0;
       
       
   }
       
        else if (num % 2 == 1 && num1 % 2 == 1 && num2 % 2 == 1){
            
         resu = (num+num1+num2)/3;
         
         printf("todos os numeros digitados sao impares: \nnumero 1 = %d\nnumero 2 = %d\nnumero 3 = %d\n", num, num1, num2);
         printf("a media dos numeros impares acima sao: %d\n\n", resu);
         laco = 0;
         
       
   } else if(num % 2 == 0 && num1 % 2 ==0 && num2 % 2 == 0){
       
       printf("todos os numeros sao pares \nOs numeros digitados sao: \nnumero 1= %d\nnumero 2= %d\nnumero 3= %d\n\n", num, num1, num2);
       laco = 0;
       
   } else{
       printf("numeros invalidos, digite apenas numeros impares ou pares\n");
       laco = 0;
       
   }
       
       
       printf("deseja continuar no programa?: \n0 para sair\n1 para ficar\n");
       scanf("%d", &laco);
   } while (laco == 1);


 
}

