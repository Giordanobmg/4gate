// desenvolver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
int lista[7];
int 
buscaBinaria (int x, int n) {
   int e, m, d;                              // 1
   e = 0; d = n-1;                           // 
   while (e <= d) {                          // 3
      m = (e + d)/2;                         // 4
      if (lista[m] == x) return m;               // 5
      if (lista[m] < x) e = m + 1;               // 6
      else d = m - 1;                        // 7
   }
   if (e==n)                                      // 8
   return (-1);
   else return (e);
   // 9
}                                                   
	
int comparar(int valor){
	int i= buscaBinaria(valor,7);
	printf("\n %d",i);  
	return i;
}

int add(int valor){
	int i,aux;
   i= buscaBinaria(valor,7);
   if (i>0){
   while (valor!=(-1)){
                aux = lista[i];
                lista[i] = valor;
                valor=aux;
				i++;
            }
        lista[i]=(-1);
   }
   else lista[6]=valor;
	return i;
  
}






int _tmain(int argc, _TCHAR* argv[])
{
	  int i, j, aux;

    for( i=0; i<=5; i++ ){
        printf("Digite o %d elemento da lista: ", i+1);
        scanf("%d",&lista[i]);
    }

    printf("\nlista digitada: ");

    for( i=0; i<=5; i++ ){
        printf("%d ",lista[i]);
    }

    printf("\n");

    for( j=0; j<5; j++ ){
        for( i=0; i<5; i++ ){
            if( lista[i] > lista[i+1] ){
                aux = lista[i];
                lista[i] = lista[i+1];
                lista[i+1]=aux;
            }
        }
    }
	lista[6]=-1;
	int pos= add(1);
    printf("lista ordenada: ");
	comparar(10);
    for( i=0; i<=6; i++ ){
        printf("%d ",lista[i]);
    }
   
    printf("\n");
    return 0;
	getchar();
}
