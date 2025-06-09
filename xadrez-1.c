#include <stdio.h>
 int main() {
    
    // Xadrez
    // Movimentação de Torre - 5 casas à direita, 
    // Bispo - 5 casas diagonais cima e direita
    // Rainha - 8 casas direita

    /*
     Requisitos funcionais

 
     1. Entrada de Dados: Os valores para o número de casas a serem movidas serão definidos diretamente no código através de variáveis ou constantes.
 
     2. Lógica de Movimentação: Cada programa deverá implementar a lógica de movimento específica de cada peça (Torre, Bispo, Rainha).
 
     3. Saída de Dados: O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. 
    Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. 
    Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");
    , printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");*/


   // Entrada de variáveis:
    int torre, bispo, rainha;


   // Torre - Instrução While - 5 casas à direita
    torre = 1;
    printf ("\n Movimentacao da TORRE: \n");
    while (torre <= 5 ) 
    { printf("Direita \n");
      torre++;
   }

   // Bispo - Instrução Do - While - 5 casas diagonais cima e direita

   bispo = 0;
   printf ("\nMovimentacao do Bispo:\n");
   do 
   {
      printf(" Cima e direita\n "), bispo++;
   } while (bispo < 5);
   



   // Rainha - instrução For - 8 casas a direita
      printf ("\n Movimentacao da RAINHA: \n");
    for (rainha - 1; rainha < 8; rainha ++)
    { printf("Direita \n", rainha);
    }

    // Cavalo - loop aninhado - for / while - 2 baixo e 1 esquerda
       printf ("\n Movimentacao do Cavalo: \n");
       int cavalo;
       for (cavalo = 1; cavalo <= 2; cavalo ++)
         {  printf("Baixo \n");
         }
            while (cavalo < 2)
            cavalo++;
            
            {
               printf("Esquerda \n");
            }
         printf("\n");
      

         


 return 0;

 }