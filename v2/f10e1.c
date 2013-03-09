#include<stdio.h>
int main()
{
int num[5];
int count=0;
float media;
int i;

do{
printf("Introduza 5 numeros\n");
scanf("%d",&num[i]);
}
while (num>=0);


for (i=1;i<5;i++)

count=count+num[i];

media=(count/5);
printf("A media é de %f",media);
//if (num[i]<media)
  // printf("Os numero sao %d", num);

system("pause");
    
}
