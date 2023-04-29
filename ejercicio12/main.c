#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#define ESC 27
#define DIM 20

/**Dados dos arreglos ordenados alfabéticamente,
crear un tercer arreglo con los elementos de los dos primeros intercalados,
de manera que quede un arreglo también ordenado alfabéticamente.

*/
///Prototipado
int cargar_arreglo(char arreglo[DIM],int validos);
int cargar_arreglo1(char arreglo[DIM],int validos1);
int nuevo_arreglo(char arreglo[DIM],char arreglo1[DIM], char arreglo_nuevo[DIM], int validos,int validos1, int validos_nuevo);
void mostrar(char arreglo_nuevo[DIM],int validos_nuevo);
int main()
{
    system("COLOR B");
    int validos_nuevo=0,validos=0,validos1=0;
    char arreglo[DIM], arreglo1[DIM],arreglo_nuevo[DIM];

    validos=  cargar_arreglo(arreglo,validos);
    validos1= cargar_arreglo1(arreglo1,validos1);

    validos_nuevo= nuevo_arreglo(arreglo,arreglo1,arreglo_nuevo,validos,validos1,validos_nuevo);

    mostrar(arreglo_nuevo,validos_nuevo);



    return 0;
}




///Carga arreglo1
int cargar_arreglo(char arreglo[DIM],int validos)
{
    char o=0,letra;

    while(o!=27)
    {
        printf("Ingrese dato para arreglo 1 en pos %d\n",validos);
        scanf("%c",&letra);
        arreglo[validos]=letra;

        printf("Si desea salir presione ESCAPE o presione cualquier tecla para continuar \n");
        fflush(stdin);
        o=getch();
        validos++;

    }
    system("cls");
    return validos;
}
///carga arreglo2
int cargar_arreglo1(char arreglo[DIM],int validos1)
{
    char o=0,letra;

    while(o!=27)
    {
        printf("Ingrese dato para arreglo 2 pos %d\n",validos1);
        scanf("%c",&letra);
        arreglo[validos1]=letra;

        printf("Si desea salir presione ESCAPE o presione cualquier tecla para continuar \n");
        fflush(stdin);
        o=getch();
        validos1++;

    }
    system("cls");
    return validos1;

}

int nuevo_arreglo(char arreglo[DIM],char arreglo1[DIM], char arreglo_nuevo[DIM], int validos,int validos1,int validos_nuevo)
{
    int i=0,j=0;

    while(i<validos && j<validos1)
    {



        if(arreglo[i]<arreglo1[j])
        {
            arreglo_nuevo[validos_nuevo]=arreglo[i];
            i++;
        }
        else if(arreglo1[j]<arreglo[i])
        {
            arreglo_nuevo[validos_nuevo]=arreglo1[j];
            j++;

        }
        validos_nuevo++;
    }
    if(i<=validos )
    {
        while(j<validos1)
        {
            arreglo_nuevo[validos_nuevo]=arreglo1[j];
            validos_nuevo++;
            j++;
        }

    }
    if(j<=validos1)
    {
        while(i<validos)
        {
            arreglo_nuevo[validos_nuevo]=arreglo[i];
            validos_nuevo++;
        i++;
        }


    }

    return validos_nuevo;
}

void mostrar(char arreglo_nuevo[DIM],int validos_nuevo)
{
    int i=0;
    while(i<validos_nuevo)
    {
        printf(" %c |",arreglo_nuevo[i]);
        i++;
    }

}

