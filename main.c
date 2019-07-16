#include <stdio.h>
#include <stdlib.h>
#include "arches.h"
#include <string.h>
#include <conio.h>
void imprimirAhorcados(int);
int aciertosFaltantes(int[],int);
void imprimirLugares(int[],int,char*);

       char ahorcado[]={
"\n | |===========||\n\
 |||           ||\n\
  |            ||\n\
               ||\n\
               ||\n\
               ||\n\
               ||\n\
            ===================\n\
            ===================\n\""};

   char ahorcado1[]={
"\n | |===========||\n\
 |||           ||\n\
  |            ||\n\
  O            ||\n\
               ||\n\
               ||\n\
               ||\n\
            ===================\n\
            ===================\n\""};
   char ahorcado2[]={
"\n | |===========||\n\
 |||           ||\n\
  |            ||\n\
  O            ||\n\
  |            ||\n\
               ||\n\
               ||\n\
            ===================\n\
            ===================\n\""};
   char ahorcado3[]={
"\n | |===========||\n\
 |||           ||\n\
  |            ||\n\
  O            ||\n\
 /|            ||\n\
               ||\n\
               ||\n\
            ===================\n\
            ===================\n\""};
   char ahorcado4[]={
"\n | |===========||\n\
 |||           ||\n\
  |            ||\n\
  O            ||\n\
 /|\\           ||\n\
               ||\n\
               ||\n\
            ===================\n\
            ===================\n\""};
char ahorcado5[]={
"\n | |===========||\n\
 |||           ||\n\
  |            ||\n\
  O            ||\n\
 /|\\           ||\n\
  |            ||\n\
               ||\n\
            ===================\n\
            ===================\n\""};
   char ahorcado6[]={
"\n | |===========||\n\
 |||           ||\n\
  |            ||\n\
  O            ||\n\
 /|\\           ||\n\
  |            ||\n\
 /             ||\n\
            ===================\n\
            ===================\n\""};
   char ahorcado7[]={
"\n | |===========||\n\
 |||           ||\n\
  |            ||\n\
  O            ||\n\
 /|\\           ||\n\
  |            ||\n\
 / \\           ||\n\
            ===================\n\
            ===================\n\""};

    char Ganador[]={
"||========\n\
 ||\n\
 ||\n\
 ||  ===||\n\
 ||     ||\n\
 ||=====|| \n\""
    };

    char Perdedor[]={
" ||========||\n\
 ||        ||\n\
 ||        ||\n\
 ||========||\n\
 ||\n\
 ||\n\
 ||\n\""
    };
    char lugares[]={"(_) "};
int main()
{
        int repetir=2;

    do{
    char palabra[64]; int espacios,fallidos=0;
    char captura;   int ganaste=0;
    printf("Inserte la palabra a buscar: ");
    fflush(stdin); gets(palabra);
    espacios=strlen(palabra);
    printf("Presiona ENTER para Iniciar el Juego");
    getch(); system("cls");
    int acertados[espacios];
    for(int i=0;i<espacios;i++)
        acertados[i]=0;
   /* for(int i=0;i<strlen(palabra);i++){
        printf("%s",lugares);
    }   */
    //printf("\n");



    while(fallidos<=7){///JUEGO/////////////
        int aciertos_faltantes=espacios;
                int error=1;
   imprimirAhorcados(fallidos);
    printf("\n%i\n",fallidos);
    imprimirLugares(acertados,espacios,palabra);
    printf("\nInserta la Letra: ");
       scanf("%c",&captura); fflush(stdin);
        system("cls");
            for(int i=0;i<espacios;i++){
           if(captura==palabra[i]){
                if(acertados[i]==0){
                    acertados[i]=1;
                    error=0;
                    break;}
            }
        }

        aciertos_faltantes=aciertosFaltantes(acertados,espacios);
            if(aciertos_faltantes==0){
                ganaste=1;
                break;
            }
            //printf("\n%i",error); getch();
        if(error!=0)
            fallidos++;
    }///CIERRE DE JUEGO//////////
    int repetir=0;

    imprimirAhorcados(fallidos);
    printf("\n");
    imprimirLugares(acertados,espacios,palabra);
    if(ganaste==1)
        printf("\n%s",Ganador);
    else
    printf("\n%s\nLa palabra era: %s",Perdedor,palabra);

    getch(); fflush(stdin);system("cls");
    printf("quieres jugar otra vez \n1.-SI\n2.-NO\n");
    scanf("%i",&repetir); system("cls");
    }while(repetir==1);


system("pause");

    return 0;
}

void imprimirAhorcados(int fallidos){
    if(fallidos==0)
        printf("%s\n",ahorcado);
    if(fallidos==1)
        printf("%s\n",ahorcado1);
    if(fallidos==2)
        printf("%s\n",ahorcado2);
    if(fallidos==3)
        printf("%s\n",ahorcado3);
    if(fallidos==4)
        printf("%s\n",ahorcado4);
    if(fallidos==5)
        printf("%s\n",ahorcado5);
    if(fallidos==6)
        printf("%s\n",ahorcado6);
    if(fallidos>=7)
        printf("%s\n",ahorcado7);
}

int aciertosFaltantes(int acertados[],int espacios){
    int correctos=espacios;
    for(int i=0;i<espacios;i++){
        if(acertados[i]==1)
            correctos--;
    }

    return correctos;
}

void imprimirLugares(int acertados[],int espacios,char *palabra){
    for(int i=0;i<espacios;i++){
        if(acertados[i]==1)
            printf("(%c) ",palabra[i]);
            else printf("(_) ");
    }
}
