#include <stdio.h>
int main()
{
int numauto=0;

int totalia=0;

float maxia=-1;

float minia=99999999;
char nome[20];
float t,p, ia;
int cc;
do
{printf ("Qual e o nome do primeiro cliente? (fim para terminar) ");
scanf ("%s", &nome);}
while (strcmp(nome,"")==0);

while (strcmp(nome,"fim")!=0)
{
             do
             {
             printf ("Qual e a cilindrada da viatura? ");
             scanf ("%d", &cc);
             }
             while (cc<450); // && (strstr("0123456789",cc) !=0);
             
             if (cc <=1250) 
             {
                t=3.74;
                p=2,417.56;
                }   
             else {t=8.86;
                  p=8,813.22;    }
             ia=t*cc-p;
             printf ("O Sr.%s vai pagar %.2f de ia",nome, ia);
             
             totalia=totalia+ia;
             numauto=numauto+1;
             
             if (ia>maxia)
                maxia=ia;
             if (ia<minia)
                minia=ia;
                
             do
             {
              printf ("\nQual e o nome do seguinte cliente? (fim para terminar) ");
              scanf ("%s", &nome);
             }
             while (strcmp(nome,"")==0);
}
printf ("O Maior IA=%.2f  -  Minimo IA=%.2f de ia ",maxia, minia);
printf("\n");
system("pause");
}
