#include <stdio.h>
int main()
{
float Peso;
float Altura;
char Sexo[1];
do
{
    printf ("Quanto Pesa (em Kg)? ");
    scanf  ("%f",&Peso);
}
while (Peso<0);
do
{
    printf ("Quanto Mede (em M)? ");
    scanf  ("%f",&Altura);
}
while (Altura<0);
do
{
    printf ("A que sexo pretence? (M)asculino ou (F)emenino? ");
    scanf  ("%s",&Sexo);
}
while ((strcmp(Sexo,"M")!=0) & (strcmp(Sexo,"F")!=0));
float IMC=(Peso/(pow(Altura,2)));
{
if (strcmp(Sexo,"M")==0)
    if (IMC<20.7)
        printf ("Condicao abaixo do normal!");
        else if (IMC<=26.4)
                 printf ("No peso normal.");
                 else if (IMC<=27.8)
                          printf ("Marginamente acima do peso!");
                          else if (IMC<=31.1)
                                   printf ("Acima do peso ideal!");
                                   else printf ("Obeso!");
else if (IMC<19.1)
     printf ("Condicao abaixo do normal!");
     else if (IMC<=25.8)
              printf ("No peso normal.");
              else if (IMC<=27.3)
                   printf ("Marginamente acima do peso!");
                           else if (IMC<=32.3)
                                   printf ("Acima do peso ideal!");
                                   else printf ("Obeso!");       
}                                 
printf("\n");
system("pause");
}            
