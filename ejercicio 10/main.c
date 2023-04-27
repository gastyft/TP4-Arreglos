#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#define ESC 27
#define DIM 20



/**Realizar una función que invierta los elementos de un arreglo.  (sin utilizar un arreglo auxiliar)
*/
void cargar_arreglo(char arreglo[DIM],int *validos);
void intercambio(char arreglo[DIM],int validos);
void mostrar(char arreglo[DIM],int validos);

int main()
{
system("COLOR B");
int validos=0;
char arreglo[DIM];

cargar_arreglo(arreglo,&validos);
intercambio(arreglo,validos);
mostrar(arreglo,validos);
    return 0;
}


void cargar_arreglo(char arreglo[DIM], int *validos){
char o=0,letra;
int i=0;
while(o!=ESC && i<DIM){
    printf("Ingrese un dato \n\t");
    scanf("%c",&letra);
    arreglo[i]=letra;
    printf("PResione ESCAPE para salir o cualquier tecla para continuar\n");
    fflush(stdin);
    o=getch();
    i++;
}
*validos=i;
}


void intercambio(char arreglo[DIM],int validos){

char letra;
for(int i = 0; i<=validos ;i++)
{
   letra =arreglo[i];
      arreglo[i]=arreglo[validos-1];
         arreglo[validos-1]=letra;
         validos--;
}

}

void mostrar(char arreglo[DIM], int validos){

int i=0;
while(i<validos){
printf("%c |",arreglo[i]);

i++;
}

}
