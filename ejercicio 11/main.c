#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#define ESC 27
#define DIM 20



/**
Ordenar un arreglo según los siguientes métodos:
a. Selección
b. Inserción
*/
void cargar_arreglo(int arreglo[DIM],int *validos);
void insertar(int arreglo[DIM], int *validos);
void mostrar(int arreglo[DIM],int validos1);
void menu(int arreglo[DIM],int *validos,int validos1,int pos);
void seleccion(int arreglo[DIM],int validos);
int pos_menor(int arreglo[DIM],int validos,int pos);
int main()
{

    int pos=0;
    int arreglo[DIM],validos=0,validos1=0;


    system("COLOR B");
    cargar_arreglo(arreglo,&validos);
    validos1=validos;
    menu(arreglo,&validos,validos1,pos);
    return 0;
}
void menu(int arreglo[DIM], int *validos,int validos1,int pos)
{
    int o=0;
    while(o!=ESC)
    {
        printf(" \nIngrese 'a' para seleccion o 'b' para insercion. Sino ESCAPE PARA SALIR \n");

        o=getch();

        switch(o)
        {
        case 'a':
            insertar(arreglo,validos);
            mostrar(arreglo,validos1);
            break;
        case 'b':
            seleccion(arreglo,validos1);
            mostrar(arreglo,validos1);

            break;
        case 27:
            printf("Codigo finalizado\n");
            break;

        default:
            printf("Error opcion no valida\n");
            printf("presione cualquier tecla para continuar o ESCAPE para salir\n");
        }

    }

}
///cargar arreglo
void cargar_arreglo(int arreglo[DIM],int *validos)
{
    char o=0;
    int num;
    int i=0;
    while(o!=27 && i<DIM)
    {
        printf("Ingrese numeros en orden para insercion y aleatorios para seleccion \n");
        scanf("%d",&num);
        arreglo[i]=num;
        printf("Presione ESCAPE para salir o cualquier tecla para continuar\n");

        fflush(stdin);
        o=getch();
        i++;
    }
    *validos=i;
}
/// insercion
void insertar(int arreglo[DIM], int *validos)
{
    int ins;
    int i=*validos-1;
    printf("Ingrese numero a ingresar\n");
    scanf("%d",&ins);



    while (i>=0 && ins < arreglo[i])
    {

        arreglo[i+1] = arreglo[i];

        i--;

    }
    arreglo[i+1] = ins;

    *validos+=1;
}
///seleccion


int pos_menor1(int arreglo[DIM],int validos,int pos){


    int menor = arreglo[pos];
    int posMenor = pos;
    int index = pos + 1;
    while (index < validos){
        if(menor > arreglo[index]){
            menor = arreglo[index];
            posMenor = index;
        }
        index++;
    }
    return posMenor;
}


void seleccion(int arreglo[DIM],int validos1)
{
 int posMenor,aux;
    int i = 0;
    while(i< validos1- 1){ /// llego hasta la anteúltima posición
        posMenor = pos_menor1(arreglo, validos1, i);
        aux = arreglo[posMenor];
        arreglo[posMenor] = arreglo[i];
        arreglo[i] = aux;
        i++;
    }

    }






///mostrar arreglo
void mostrar(int arreglo[DIM],int validos1)
{

    for(int i=0; i<validos1; i++)
    {
        printf(" %d |",arreglo[i]);
    }


}


