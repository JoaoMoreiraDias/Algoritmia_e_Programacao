#include<stdio.h>
main()
{
 int seq[21];
 int i;
 int num;

//Inicializa vector das ocorrencias a zero
for (i=0; i<=20;i++)
seq[i]=0;

//Ler 1º número (entre -1 (para sair) e 20
do{
printf("Introduza o  numero\n");
scanf("%d",&num);
}while (num<-1 || num>20);

//ciclo para processar leituras
while (num!=-1)
{
//Actualiza vector das ocorrencias
seq[num]++;     
//Ler próximo número (entre -1 (para sair) e 20
do{
printf("Introduza o  numero\n");
scanf("%d",&num);
}while (num<-1 || num>20);
}
//Estabelecer ciclo de 0 a 20 e escrever as ococrrencias de cada um      
for (i=0; i<=20;i++)
if (seq[i]>1)
 printf("O num %d aparece %d vezes\n",i, seq[i]);

system("pause");

}
