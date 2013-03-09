#include <stdio.h>
int main ()
{
int index;
int arr[30]; 
int max=-1;
int min=100;

for (index=0; index<30;index++) 
arr[index]= rand()%100; //prencher a array de 30 espacos com numeros a sorte
printf ("Os 30 numeros gerados foram: \n"); 
       for (index=0; index<=29; index++) //array pela ordem normal
       printf ("%d.  %d\n",(index+1),arr[index]); //index+1 porque o index comeca em 0
       printf("\n");
       printf ("E os mesmos na ordem inversa sao: \n"); 
              for (index=29; index>=0; index--) { // array pela ordem inversa
              printf ("%d.  %d\n",(index+1),arr[index]);
              if(arr[index]>max)
              max=arr[index];
       if(arr[index]<min)
       min=arr[index];
}
printf ("\n");
printf("O numero maximo e: %d\n",max);
printf("O numero minimo e: %d\n",min);
system("pause");
}
