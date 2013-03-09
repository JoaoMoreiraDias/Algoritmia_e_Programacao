#include<stdio.h>
int main()
{
int num[5];
int soma=0;
int i;

for (i=0;i<5;i++){
do{
printf("Introduza 5 numeros\n");
scanf("%d",&num[i]);
}while (num[i]<0);
soma=soma+num[i];
}
float media=(float) soma/5;
printf("A media é de %.2f\n",media);
for (i=0;i<5;i++)
if (num[i]<media)
 printf("%d < media (%.2f)\n",num[i],media);
system("pause");
    
}
