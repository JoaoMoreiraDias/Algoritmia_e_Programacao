#include <stdio.h> 
int main () 
{ 
int i; 
int op; 
int soma;
int x[5]; 
/*printf ("Introduza 5 numeros, p.f\n"); 
for (i=0; i<5;i++) 
{printf ("\nIntroduza o numero %d: ",(i+1)); 
scanf("%d",&x[i]); }*/
for (i=0; i<5;i++) 
x[i]= rand()%10+1;

do 
{printf (" 1. Escrever os 5 numeros\n 2. Escrever inverso\n 3. Escrever Soma\n 4. Escrever Media\n0.Sair\n"); scanf("%d",&op);} 
while ((op<0) || (op>4)); 
while (op!=0)
{ switch (op){ 
case 1: 
printf ("Os cinco numeros introduidos foram:\n"); 
for (i=0; i<5;i++) 
printf ("A[%d]=%d\n",(i+1),x[i]); 
break; 
case 2: 
printf ("Os cinco numeros introduidos inverso foram:\n"); 
for (i=4; i>=0;i--) 
printf ("A[%d]=%d\n",(i+1),x[i]);
break; 
case 3: 
soma=0; 
for (i=4; i>=0;i--) 
soma=soma+x[i]; 
printf ("A soma dos n�meros=%d: \n",soma); 
break;
case 4: 
soma=0; 
for (i=4; i>=0;i--) 
soma=soma+x[i]; 
float media=(float) soma/5; 
printf ("A media dos n�meros=%f: \n",media);  
break;
 } 

do 
{printf ("1. Escrever os 5 numeros\n 2. Escrever inverso\n 3. Escrever Soma\n 4. Escrever Media\n0.Sair\n"); scanf("%d",&op);} 
while ((op<0) || (op>4));  } 
system ("pause"); } 
