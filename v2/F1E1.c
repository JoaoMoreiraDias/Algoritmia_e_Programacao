#include <stdio.h>
int main ()
{
int idade1;
int idade2;


printf ("Qual a idade do 1 irmao\n");
scanf("%d",&idade1);

printf ("Qual a idade do 2 irmao\n");
scanf("\n%d",&idade2);

float media=(float)(idade1+idade2)/2;

printf("\nMedia das idades e %.2f\n", media);

system ("pause");
}
