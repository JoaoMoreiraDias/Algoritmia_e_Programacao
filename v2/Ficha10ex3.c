#include<stdio.h>
int main()
{
int num[5];
int soma=0;
int i;
int j=5;

for (i=0;i<5;i++){
do{
printf("Introduza %d numero(s):\n", j);
scanf("%d",&num[i]);
j=j-1;
}while (num[i]<0);
soma=soma+num[i];
}
float media=(float) soma/5;
printf("A media e de %.2f\n",media);
float dif;
for (i=0;i<5;i++)
{dif=(float) abs(num[i]-media);
printf("%d - %.2f = %.2f\n",num[i],media, dif);}
system("pause");
    
}
