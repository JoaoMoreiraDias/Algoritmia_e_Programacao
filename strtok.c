#include <stdio.h>
#include <string.h>
 
int main(void)
{
   char *psRetorno;
   char sFrase[100]="AAAAA BBBBBB, CCCCCC DDDDDD";
   char frase2[100];
   
   strcpy(frase2,sFrase);
   
 
   printf("\nFrase = %s", sFrase);
 
   psRetorno = strtok(sFrase, " ");
 
   printf("\nRetorno = %s \n", psRetorno);
   printf("%s\n", sFrase);
   printf("%s", frase2);

printf("\n");
system("pause");
}
