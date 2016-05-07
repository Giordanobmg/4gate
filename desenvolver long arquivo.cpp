// desenvolver.cpp : Defines the entry point for the console application.
//


#include <stdio.h>
#include <stdlib.h>


 struct cadastro{
      int id;
      int ddd;
      unsigned long int numero ;
      int casa;
   } ;

int long long lista[10]={84055604,92458398,93267099,92002666,33879149,33878961,0};
int size=0;
int buscaBinaria (int x, int n) {
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

}

int comparar(int valor){
	int i= buscaBinaria(valor,7);
	printf("\n %d",i);
	return i;
}

int add(long long valor){
  int i=0;
  long long aux;
  int e, m, d;                              // 1
  e = 0; d = size;                           //
  while (e <= d) {                          // 3
      m = (e + d)/2;                         // 4
      if (lista[m] == valor) return -1;               // 5
      if (lista[m] < valor) e = m + 1;               // 6
      else d = m - 1;                        // 7
  }
  printf("%d   %d   %d    %d \n",e,m,d,size);
  if (m>=size) {
   lista[size-1]=valor;
 return size-1;
 }
  else i=e;
   while (valor!=(0)){
      aux = lista[i];
      lista[i] = valor;
      valor=aux;
	i++;
    }
        //lista[i]=(-1);

 return e;

}

 struct cadastro *salvar_numero(char* numero, int size_n){
unsigned long int telefone;
char *vazio;
 struct cadastro new_numero;
new_numero.id=0;
//if (size_n<8 || size_n>11  )return *new_numero;
if (size_n==8 ||size_n==9 ){
    numero[size_n]=' ';
telefone = strtoul(numero, &vazio, 10);
new_numero.id=1;
new_numero.ddd=61;
new_numero.numero=telefone;
return  new_numero*;
}
if (size_n==10 || size_n==11 ){
char n_ddd[2];
 int ddd;
n_ddd[0]=numero[0];
n_ddd[1]=numero[1];
ddd=atoi(n_ddd);
for (int x=0;x<size_n-2;x++){
    numero[x]=numero[x+2];
}
numero[8]=' ';
numero[9]=' ';
numero[10]=' ';
 telefone = strtoul(numero, &vazio, 10);
new_numero.id=1;
new_numero.ddd=ddd;
new_numero.numero=telefone;
printf("%d   \n",new_numero.ddd);
}
return new_numero;
}




int main()
{
   FILE *fp, *saida;
        char *s ,c;
        int ct_caracteres=0;
        char* n_arquivo=(char*)"/home/giordano/Área de Trabalho/4gate-master/test2";
        char* n_arquivo2=(char*)"/home/giordano/Área de Trabalho/4gate-master/test3";

        fp = fopen(n_arquivo,"r");
        saida = fopen (n_arquivo2,"r+");
	  int i, j, aux;

while (!feof(fp))
              {
            char *numero;
            ct_caracteres=0;
            fscanf(fp,"%c",&c);
            while(c!='\n'){
                numero[ct_caracteres]=c;
                ct_caracteres++;
                fscanf(fp,"%c",&c);
                }
              //  size++;
         if (ct_caracteres!=0){
          //printf("%d %d ",numero[2] ,ct_caracteres);
        struct cadastro *new_numero2=salvar_numero(numero,ct_caracteres);
          if (new_numero2->id !=0){
           fprintf(saida,"%d%lu\n",new_numero2->ddd,new_numero2->numero);
          }
        //    printf("%lu \n",salvar_numero(numero,ct_caracteres));

        //  fprintf(saida,"%lu \n",salvar_numero(numero,ct_caracteres));

       }
    }
        fclose(fp);
        fclose(saida);



/*
    for( i=0; i<6; i++ ){
        printf("%llu ",lista[i]);
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
     for( i=0; i<=6; i++ ){
        printf("%llu ",lista[i]);
    }

    printf("\n");
	lista[6]=0;
	int pos= add(93078990);
  printf("%d    ",pos);
    printf("lista ordenada: ");
	//comparar(10);
    for( i=0; i<=6; i++ ){
        printf("%llu ",lista[i]);
    }

    printf("\n");
    return 0;
*/
}
