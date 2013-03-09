#include <stdio.h>
int main ()
{
char nome[20];
int horas;
int faltas;

do{
printf ("Qual o nome do empregado\n");
scanf("%s",&nome);
}
while (strcmp(nome,"")==0);

do
{
printf ("Qual o numero de horas\n");
scanf("\n%d",&horas);
}
while (horas<0);

do{
printf ("Ler nuemro defaltas\n");
scanf("\n%d",&faltas);
}
while (faltas<0);

float FB=horas-2/3*faltas;

if (FB<=10)
printf("Bonus=5euros");
else if(FB<=20)
    printf("Bonus=7.5euros");
    else if(FB<=30)   
        printf("Bonus=12.5euros");
         else if(FB<=40)                     
               printf("Bonus=25euros");
             else  printf("Bonus=50euros");                   

printf("\n");   
system("pause");
}
