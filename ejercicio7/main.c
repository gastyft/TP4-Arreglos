#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#define ESC 27
#define DIM 27


/** Realizar una función que inserte un carácter en un arreglo ordenado alfabéticamente, conservando el orden.
*/
void cargar_arreglo(char arreglo[DIM],int *validos);
void insertar(char arreglo[DIM], int *validos);
void mostrar(char arreglo[DIM],int validos);
int main()
{
    int validos;
    char arr[DIM];
    system("COLOR B");
    cargar_arreglo(arr,&validos);
    insertar(arr,&validos);
printf("%d \n", validos);
    mostrar(arr,validos);

    return 0;
}
void cargar_arreglo(char arreglo[DIM],int *validos)
{
    char letra,o=0;
    int i=0;
    while(o!=27 && i<DIM)
    {
        printf("Ingrese letra en orden \n");
        scanf("%c",&letra);
        arreglo[i]=letra;
        printf("Presione ESCAPE para salir o cualquier tecla para continuar\n");

        fflush(stdin);
        o=getch();
        i++;
    }
    *validos=i;
}

void insertar(char arreglo[DIM], int *validos)
{
    char ins;
int i=*validos-1;
    printf("Ingrese caracter a ingresar\n");
    scanf("%c",&ins);



  while (i>=0 && ins < arreglo[i]){

       arreglo[i+1] = arreglo[i];

        i--;

    }
     arreglo[i+1] = ins;

*validos+=1;
  }











void mostrar(char arreglo[DIM],int validos)
{

    for(int i=0; i<validos; i++)
    {
        printf("%c |",arreglo[i]);



    }
printf("\n");
}
