#include <stdio.h>
int main()
{
    char nome1[20];
    char nome[20];
    char tipo[10];
    float desconto;
    int volume;
    int nart; // Numbero de artigos
    float val; // Valor final
    int liq; // Valor sem descontos
    int totalvendas=0;
    int cdescontos=0;
    // Contadores de  produtos
    int calimentacao=0;
    int cvestuario=0;
    int clivros=0;
    int cmoveis=0;
    // Contadores de tipos de produtos
   float cdalimentacao=0;
    float cdvestuario=0;
    float cdlivros=0;
    float cdmoveis=0;
   
    do
    {printf ("Qual e o nome do primeiro comprador? ");
    scanf ("%s", &nome);}
    while (strcmp(nome,"")==0);
    
    while (strcmp(nome,"fim")!=0)
    {       do {
             printf ("Que tipo de produto? (A)limentacao, (V)estuario, (L)ivros ou (M)oveis) ");
             scanf ("%s", &tipo);
             } while (strcmp(tipo,"A")!=0 && strcmp(tipo,"V")!=0 && strcmp(tipo,"L")!=0 && strcmp(tipo,"M")!=0);
             do
             {printf ("Qual e o volume das  compras? ");
             scanf ("%d", &liq);}
             while (liq<=0);
             do {
             printf ("Quantos artigos forao comprados? ");
             scanf ("%d", &nart);
             }while (nart<=0);
             
             totalvendas=totalvendas+nart;
             val=liq;
             
             printf ("\n Tipo=%s", tipo);
             
              if (strcmp(tipo,"A")==0)
                   {if (liq>2500)
                      {val=liq*0.9;
                      cdalimentacao=cdalimentacao+(liq-val);} }//Problema aritemetico
              else 
                   if (strcmp(tipo,"V")==0)
                      { if (liq >5000)
                          {val=liq*0.75;
                          cdvestuario=cdvestuario+(liq-val);} }//Problema aritemetico}
                       else if (strcmp(tipo,"L")==0)
                                if (liq>3000)
                                   {val=liq*0.9;
                                   cdlivros=cdlivros+(liq-val);} //Problema aritemetico
                                else if (liq>25000)
                                        {val=liq*0.75;
                                        cdmoveis=cdmoveis+(liq-val);} //Problema aritemetico
                                        
              if (strcmp(tipo,"A")==0)
                  calimentacao=calimentacao+nart;
              else if (strcmp(tipo,"V")==0)
                       cvestuario=cvestuario+nart;
                       else if (strcmp(tipo,"L")==0)
                              clivros=clivros+nart ;
                                else cmoveis=cmoveis+nart;
             
          
             
             if (nart >20)
                val=val*0.9;
             else if (nart >10)
                     val=val*0.95;
                                 
             desconto=(float)liq-val; //Posivel origem de problema aritemetico
             cdescontos=(cdescontos+desconto);
             printf ("\nNome=%s, tipo=%s, volume=%d\n", nome, tipo,  liq);
             printf ("\nDesconto=%.2f, Valor=%.2f\n", desconto, val);
             //Problema aritemetico no desconto, e succesivamente no val
             do
           {printf ("\nQual e o nome do seguinte comprador? (fim para terminar) ");
           scanf ("%s", &nome);}
           while (strcmp(nome,"")==0);
     }



printf ("\nTotal de Vendas:%d\n",totalvendas);
printf ("\nTotal de Descontos:%d\n", cdescontos);
printf ("\nTotal de produtos de Alimentacao:%d\n", calimentacao);
printf ("\nTotal de produtos de Vestuario:%d\n", cvestuario);
printf ("\nTotal de produtos de Livros:%d\n", clivros);
printf ("\nTotal de produtos de Moveis:%d\n", cmoveis);
printf ("\nTotal de descontos em Alimentacao:%.2f\n", cdalimentacao); //Problema  de succesao a um problema aritemetico
printf ("\nTotal de descontos em Vestuario:%.2f\n", cdvestuario); //Problema  de succesao a um problema aritemetico
printf ("\nTotal de descontos em Livos:%.2f\n", cdlivros); //Problema  de succesao a um problema aritemetico
printf ("\nTotal de descontos em Moveis:%.2f\n", cdmoveis); //Problema  de succesao a um problema aritemetico
printf("\n");
system ("pause");
}
