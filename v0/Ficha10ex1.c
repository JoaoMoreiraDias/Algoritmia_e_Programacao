#include<stdio.h>
int main()
{
int num;
int soma=0;
int i;

for (i=1;i<=5;i++){
do{
printf("Introduza 5 numeros\n");
scanf("%d",&num);
}while (num<0);
soma=soma+num;
}
float media=(float) soma/5;
printf("A media é de %.2f\n",media);

system("pause");
    
}
