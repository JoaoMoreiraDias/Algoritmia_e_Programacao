#include<stdio.h>
main()
{
int par[100];
int impar[100];
int i;
int num;
int np=0;
int ni=0;


do{
printf("\nIntroduza o 1º numero ");
scanf("%d",&num);
}while (num<-1 || num>100);

while (num!=-1)
{
if (num %2==0)
{par[np]=num;
np++;}
else
{impar[ni]=num;
ni++;}
do{
printf("\nIntroduza o numero ");
scanf("%d",&num);
}while (num<-1 || num>100);
}

printf("*************Pares*************\n");
for (i=0; i<np;i++)
printf("%d\n",par[i]);
printf("*************Impares*************\n");
for (i=0; i<ni;i++)
printf("%d\n",impar[i]);

system("pause");


}
