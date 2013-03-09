#include <stdio.h>
#include <string.h>
int main ()
{
    int adultos;
    int totaladultos=0;
    int totalcriancas=0;
    int criancas;
    int max=0;
    char nome[20];
    int totalescuteiro=0;
    int numeroescuteiros=0;
    int totalpessoas=0;
    int pessoas=0;
    int totalrecebido=0;
    char maxnome[100];
    
    do
         {
         printf("Qual o nome do escuteiro?\n");
         scanf("%s",&nome);
         }
    while (strcmp(nome,"")==0);

    
    while (strcmp(nome,"fim")!=0)
    {
    numeroescuteiros=numeroescuteiros+1;
    
    do
          {
          
          printf("Numero de adultos que inscreve?");
          scanf("%d",&adultos);
          }
    while (adultos<0);
    
    totaladultos=totaladultos+adultos;
    
    do
          {
          printf("Numero de criancas que inscreve?");
          scanf("%d",&criancas);
          }
    while (criancas<0);
    
    totalcriancas=totalcriancas+criancas;
    totalescuteiro=((criancas*75)+(adultos*100))+50;
    totalrecebido=totalrecebido+totalescuteiro;
    
  if (totalescuteiro>max)        {                                                     
   strcpy(maxnome, nome);
  max=totalescuteiro;}
    
    printf("O %s tem que pagar %d\n", nome, totalescuteiro);
    
    do
          {
         printf("Qual o nome do escuteiro?\n");
         scanf("%s",&nome);
         }
         
    while (strcmp(nome,"")==0);
    }
    
    totalpessoas=totalcriancas+totaladultos+numeroescuteiros;
    
float precentagemcriancas=(float)(totalcriancas/totalpessoas)*100;
float precentagemadultos=(float)(totaladultos/totalpessoas)*100;
float precentagemescuteiros=(float)(numeroescuteiros/totalpessoas)*100;
float precentagempago=(float)(max/totalrecebido)*100;
    
    
    printf("O numero total de criancas inscritas e %d com uma percentagem de %.2f \n",totalcriancas, precentagemcriancas);
    printf("O numero total de adultos inscritos e %d com uma percentagem de %.2f \n",totaladultos, precentagemadultos);
    printf("O numero total de escuteiros inscritos e %d com uma percentagem de %.2f \n",numeroescuteiros, precentagemescuteiros);
    printf("O total pago pelos escuteiros foi %d\n",totalrecebido);
    printf("O escuteiro que pagou mais foi o %s com uma precentagem de %.2f \n", maxnome, precentagempago);
system("pause");
}
                             
    
    
    
    
    
          
          
         
