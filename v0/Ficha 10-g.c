    #include <stdio.h> 
int main () 
{
int num;
int i;
int c[21];
c[21]=0;

do
{printf ("Quantos elementos vai ter a array? ");
scanf ("%d", &num);}
while (num<0);

do (i=0;i<num;i++)
{
    do
   {printf ("%d. numero: ",i+1);
    scanf  ("%d", &num[i]);}
    while ((num<0) || (num>20));
}



system ("pause"); 
}
