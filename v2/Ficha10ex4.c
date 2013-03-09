#include<stdio.h>
int main()
{
    
int num[100];
int i=0;



do{
printf("Introduza o 1º numero\n");
scanf("%d",&num[0]);
}while (num[0]<=0);

do
{i++;
do{
printf("Introduza o numero\n");
scanf("%d",&num[i]);
}while (num[i]<=0);
}
while (num[i-1]-num[i]!=0);
int pesca;
printf("Introduza o numero apesquisar \n");
scanf("%d",&pesca);
int j=0;
while (j<i && num[j]!=pesca)
j++;
if (num[j]!=pesca)
printf("Nao encontrei o numero a pesquisar %d\n", pesca);
else
printf("Encontrei o numero %d na posicao %d\n", pesca, j+1);
system("pause");

}
