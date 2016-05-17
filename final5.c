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
struct cadastro new_numero;

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


int add2(struct cadastro telefone2){
    int size_lista=0;
    int e, m, d;
    int seek=0;                             // 1
    unsigned long int telefone;
    char *vazio;
    char numero[12];
    char* n_arquivo2=(char*)"/home/giordano/test3";
    FILE *saida = fopen (n_arquivo2,"r");
    while(!feof(saida))
    {
        char ch = fgetc(saida);
        if(ch == '\n') size_lista++;
    }
    printf("%d \n",size_lista);
    if (size_lista=0){
       fprintf(saida,"%d%lu\n",telefone2.ddd,telefone2.numero);
      return -1;
    }
    e = 0; d = size_lista;                           //
    while (e <= d ) {
        fseek(saida, 0, SEEK_SET) ;             // 3
        m = (e + d)/2;                         // 4
        seek=0;
        while(seek<m)
        {
          printf("%d  %d \n",m,seek);
            char ch = fgetc(saida);
            if(ch == '\n')   seek++;
        }
                int ct=0;
        char cha =fgetc(saida);
        cha =fgetc(saida);
        cha =fgetc(saida);
       while(cha!='\n' )
        {
            numero[ct]=cha;
            ct++;
            cha = fgetc(saida);
        }
        numero[ct]='\0';
        telefone = strtoul(numero, &vazio, 10);
        printf("%lu   e %lu   \n",telefone,telefone2.numero);
        if (telefone == telefone2.numero) return -1;               // 5
        if (telefone < telefone2.numero) e = m + 1;               // 6
        else d = m - 1;                        // 7
      }
      if (m>=size_lista) {
          fseek(saida, 0,SEEK_END);
        //fprintf(saida,"%d%lu\n",telefone2.ddd,telefone2.numero);
          return size_lista;
      }
      else e=seek;


   // while (valor!=(0)){
   //    aux = lista[i];
   //    lista[i] = valor;
   //    valor=aux;
   //  i++;
   //  }
        //lista[i]=(-1);

 return e;


}


int add3(struct cadastro telefone2){
    int size_lista=0;
    int e, m, d;
    int seek=0;                             // 1
    unsigned long int telefone;
    char *vazio;
    char numero[12];
    char* n_arquivo2=(char*)"/home/giordano/test3";
    FILE *saida = fopen (n_arquivo2,"r+");
    while(!feof(saida))
    {
        char ch = fgetc(saida);
        if(ch == '\n') size_lista++;
    }

    printf("tamanho %d \n",size_lista);
    if (size_lista==0){
      if  (telefone2.numero<100000000) fprintf(saida,"0");
       fprintf(saida,"%d%lu\n",telefone2.ddd,telefone2.numero);
       printf("add1 %d%lu\n",telefone2.ddd,telefone2.numero);
       fclose(saida);
          return -1;
    }
    e = 0; d = size_lista-1;                           //
    while (e <= d ) {

        m = (e + d)/2;                         // 4
          printf("%d %d %d \n",e,d,m );
      fseek(saida, 12*m, SEEK_SET) ;             // 3
         int ct=0;
        char cha =fgetc(saida);
        printf( "%c",cha);
        if (cha=='0' || cha=='\n' ){
        cha =fgetc(saida);

        printf( "%c",cha);
      }
        cha =fgetc(saida);
               printf( "%c.\n",cha);
 cha =fgetc(saida);
       while(cha!='\n' )
        {
            numero[ct]=cha;
            ct++;
            cha = fgetc(saida);
        }
        numero[ct]='\0';
        telefone = strtoul(numero, &vazio, 10);
        printf("  %lu   e %lu   \n",telefone,telefone2.numero);
        if (telefone == telefone2.numero) return 5;               // 5
        if (telefone < telefone2.numero) e = m + 1;               // 6
        else d = m - 1;                        // 7
      }
        printf("%d %d %d \n",e,d,m );
fclose(saida);
fopen (n_arquivo2,"r+");
      if (m>=size_lista)  fseek(saida, 0,SEEK_END);
      else if (d==(-1)) {printf ("inicio");
      fseek(saida,0,SEEK_SET);
    }
      else fseek(saida,12*e,SEEK_SET);
      if  (telefone2.numero<100000000) fprintf(saida,"0");
       fprintf(saida,"%d%lu\n",telefone2.ddd,telefone2.numero);
       printf("add %d%lu\n",telefone2.ddd,telefone2.numero);

       fclose(saida);
          return size_lista;

}






/*int add(struct cadastro teste){
  int i=0;
  long int aux;
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
*/

 struct cadastro  salvar_numero(char* numero, int size_n){
unsigned long int telefone;
char *vazio;
 new_numero.id=0;
if (size_n<8 || size_n>11  )return new_numero;
if (size_n==8 ||size_n==9 ){
    numero[size_n]=' ';
telefone = strtoul(numero, &vazio, 10);
new_numero.id=1;
new_numero.ddd=61;
new_numero.numero=telefone;
return new_numero;
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
if (size_n==10)numero[8]=' ';
numero[9]=' ';
numero[10]=' ';
 telefone = strtoul(numero, &vazio, 10);
new_numero.id=1;
new_numero.ddd=ddd;
new_numero.numero=telefone;
//printf("%d   \n",new_numero.ddd);
}
return new_numero;
}




int main()
{
   FILE *fp;
        char *s ,c;
        int ct_caracteres=0;
        char* n_arquivo=(char*)"/home/giordano/test2";
        char* n_arquivo2=(char*)"/home/giordano/test3";

        fp = fopen(n_arquivo,"r");
        //saida = fopen (n_arquivo2,"r+");
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
                size++;
        if (ct_caracteres!=0){
      //   printf("%d %d ",numero[2] ,ct_caracteres);
        new_numero= salvar_numero(numero,ct_caracteres);
          if (new_numero.id !=0){
     //       saida = fopen (n_arquivo2,"a");
//fprintf(saida,"%d%lu\n",new_numero.ddd,new_numero.numero);
    //       fclose(saida);
      int x= add3(new_numero);
           printf(" %d \n",x);
           unsigned long int telefone;




      //    fprintf(saida,"%d%lu\n",new_numero.ddd,new_numero.numero);
          }
        //    printf("%lu \n",salvar_numero(numero,ct_caracteres));

        //  fprintf(saida,"%lu \n",salvar_numero(numero,ct_caracteres));

      }
    }
        fclose(fp);



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