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
    
    printf ("------------\n");
    float delta;
    for (joao=0;joao<5;joao++)
    {delta=(float) fabs(n[joao]-media);
    printf ("A differenca entre o %d numbero e a media e: %.2f\n", joao+1,delta);
}
 
    printf("\n");
system ("pause");
}
