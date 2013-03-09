#include<stdio.h>


main()
{


int par[100];
int impar[100];
int numb;
int index;
int numbpar=0;
int numbimp=0;


do{
printf("Introduza o primeiro numero (max 100, -1 para terminar): ");
scanf("%d",&numb);
}while (numb<-1 || numb>100);


while (numb!=-1)
{
if (numb %2==0)
{
        par[numbpar]=numb;
        numbpar++;
        }
        
else
{impar[numbimp]=numb;
numbimp++;}


do{
printf("Prox. Numero? ");
scanf("%d",&numb);
}while (numb<-1 || numb>100);


}
 printf("\n");
 printf("Pares: ");
               printf("\n");
              for (index=0; index<numbpar; index++)
 printf("%d\n", par[index]);
 
 printf("\n");
 printf("Impares: ");
               printf("\n");
              for (index=0; index<numbimp; index++)
 printf("%d\n", impar[index]);

 printf("\n");
system("pause");
}

//Nota: Há uma gralha no inunciado. 5 não esta a ser escrito na saída!
//João Moreira Dias (24972)
