/* Lendo e escrevendo em um arquivo */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 struct cadastro{
      int id;
      int ddd;
      unsigned long int numero ;
   } ;


unsigned long int salvar_numero(char* numero, int size){
unsigned long int telefone;
char *vazio;
struct cadastro new_numero;
if (size<8 || size>11  )return 0;
if (size==8 ||size==9 ){
    numero[size]=' ';
telefone = strtoul(numero, &vazio, 10);
new_numero.id=1;
new_numero.ddd=61;
new_numero.numero=telefone;
return telefone;
}
if (size==10 || size==11 ){
char n_ddd[2];
 int ddd;
n_ddd[0]=numero[0];
n_ddd[1]=numero[1];
ddd=atoi(n_ddd);
for (int x=0;x<size-2;x++){
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
return telefone;
}





int main()
{
        FILE *fp;
        char *s ,c;
        int ct_caracteres=0;
        char* n_arquivo=(char*)"/home/giordano/test2";
        fp = fopen(n_arquivo,"r");
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
         if (ct_caracteres!=0){
            printf("%lu \n",salvar_numero(numero,ct_caracteres));
        }
    }
        fclose(fp);
        return(0);

}