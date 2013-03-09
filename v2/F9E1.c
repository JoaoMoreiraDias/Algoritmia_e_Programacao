#include <stdio.h>
#include <string.h>

int main ()
{
char nome[20];
char consulta[20];
int idade;
int countC=0;
int countA=0;
int countI=0;
int countOF=0;
int countPSI=0;
int countDE=0;
int countCA=0;
float preco=0;
char maior[12];
int max=-1;
char alpha[100]="opcd";



do{
printf ("Qual o nome do cliente (fim para terminar)\n");
scanf("%s",&nome);
}
while (strcmp(nome,"")==0);

while (strcmp (nome,"fim")!=0)
{

do{
printf ("Qual é a consulta: 1-Oftamologia ,2-Psicologia ,3-Cardiologia ,4-Dermatologia \n");
scanf("%s",&consulta);}
while ((consulta<0)||(consulta>4));
while (consulta!=0);
}

do{
printf ("Introduza a idade\n");
scanf("%d",&idade);
}
while (idade<0);


if (strcmp (consulta ,"o")==0)
{preco=80;
countOF=countOF+1;}
   else if (strcmp (consulta ,"p")==0)   
   {preco=95;
   countPSI=countPSI+1;}
            else if (strcmp (consulta ,"c")==0)   
            {preco=75;
            countCA=countCA+1;}
                   else {    countDE=countDE+1;
                   preco=75;}
  
  
  
 if (idade <12)
    {
    preco=preco*0.85;
    countC=countC+1;
    }
 else if (idade >65)
      {
      preco=preco*0.85;   
      countI=countI+1;
      }       
  else 
  {
   countA=countA+1;
  }
printf ("O %s vai pagar %.0f euros\n",nome, preco);

do{
printf ("Qual o nome do cliente (fim para terminar)\n");
scanf("%s",&nome);
}
while ((strcmp(nome,"")==0));     


//printf("Idosos:%f"countI*100,"Adulto:%f"countA*100,"Crianças:%f"countC*100);
int total;
total=countI+countA+countC;
printf("Idosos:%d Adulto:%d Crianças:%d \n",countI,countA,countC);
float p1=(float)(countI/total)*100;
float p2=(float)(countA/total)*100;
float p3=(float)(countC/total)*100;
printf("Idosos:%.2f Adulto:%.2f Crianças:%.2f \n",p1,p2,p3);


if (countOF>max)      {                                                       
   strcpy(maior,"Oftalmologia");
   max=countOF;}
if (countPSI>max) {                                                            
   strcpy(maior,"Psiquiatria");
    max=countPSI;}
if (countCA>max) {                                                            
            strcpy(maior,"Cardiologia");
             max=countCA;}
if (countDE>max) {                                                            
                   strcpy(maior,"Drmatologia");
                     max=countDE;}
                    


printf("\nMaior:%s com %d", maior, max);

printf("\n");
system("pause");
}

