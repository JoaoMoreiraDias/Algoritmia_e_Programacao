#include <stdio.h>
int main ()
{
char nome[20];
int cc;
int soma=0;
int count=0;
float IA;


do{
printf ("Qual o nome do comprador (fim para terminar)\n");
scanf("%s",&nome);
}
while (strcmp(nome,"")==0);


while (strcmp (nome,"fim") != 0)
{
do
{
printf ("ler cilindrada do carro\n");
scanf("\n%d",&cc);
}
while (cc<0) //&&(strstr("0123456789",cc) !=0));; 

if (cc < 1250)
IA=3.74*cc*2.417;
else 
IA=8.86*cc*8.813;     
                       
printf("O Sr. %s paga de IA=%.2f\n",nome, IA);
soma++;
count++;
do{
printf ("Qual o nome do comprador (fim para terminar)\n");
scanf("%s",&nome);
}
while (strcmp(nome,"")==0);
}
system("pause");
}
