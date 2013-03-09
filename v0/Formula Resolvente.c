#include <stdio.h>
int main()
{
int A;
int B;
int C;
    printf("\nIntrodza o coeficiente de A: ");
    scanf ("%d",&A);
    printf("\nIntrodza o coeficiente de B: ");
    scanf ("%d",&B);
    printf("\nIntrodza o coeficiente de C: ");
    scanf ("%d",&C);
    float Dsc=pow(B,2)-4*A*C;
    if (Dsc <0)
       printf ("\nNao ha raizes reais!");
    else if (Dsc==0)
            printf ("\nUma raiz= ", -B/(2*C));
         else 
         {float Raiz1=(-B+pow(Dsc,0.5))/(2*C);
          float Raiz2=(-B-pow(Dsc,0.5))/(2*C);
         printf ("\nRaiz 1= %.2f \nRaiz 2= %.2f ", Raiz1,Raiz2);
         }

printf("\n");
system("pause");
}            
    
    
