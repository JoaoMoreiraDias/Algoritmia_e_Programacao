#include <stdio.h>
int main()
{
    int n;
    int soma=0;
    int joao;
    for (joao=0;joao<5;joao++){
    printf ("%d. numero: ",joao+1);
    scanf  ("%d", &n);
    soma=soma+n;
}
  
    float media= (float)soma/5;
    printf ("A media dos numeros e: %.2f", media);
    printf("\n");
system ("pause");
}
