#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
#define ESC 27
#define DIM 5

/**
Dado el vector {1,5,6,7,8} escribir un programa que genere otro vector
con la suma del contenido de todo los elementos anteriores al índice actual: {1,6,12,19,27}.


*/

void mostrar(int arregglo[],int validos);
void suma(int arreglo[],int validos);

int main()
{

    int arreglo[5]={1,5,6,7,8};
    system("COLOR B");
suma(arreglo,5);
mostrar(arreglo,5);
    return 0;
}


void suma(int arreglo[DIM],int validos){

int i=1;
int suma=0;


while(i<validos){


    suma=arreglo[i]+arreglo[i-1];
arreglo[i]=suma;
i++;
}


}
void mostrar(int arregglo[DIM],int validos){

for(int i=0;i<validos;i++){
    printf(" %d |",arregglo[i]);


}

}
