#include <stdio.h>
int main()
{
   int n[5];
    int soma=0;
    int joao;
    for (joao=0;joao<5;joao++){
    printf ("%d. numero: ",joao+1);
    scanf  ("%d", &n[joao]);
    soma=soma+n[joao];}
  
    float media= (float)soma/5;
    printf ("A media dos numeros e: %.2f", media);
    printf("\n");
    
    printf ("Numeros inferiores a %.2f:\n", media);
    for (joao=0;joao<5;joao++)
    if (n[joao]<media)
       printf ("%d\n", n[joao]);
    
    printf("\n");
system ("pause");
}
