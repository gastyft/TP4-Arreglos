#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<string.h>
#define ESC 27
#define DIM 20


/**Realizar una función que determine si un arreglo es capicúa.
*/
int cargar_arreglo(int arreglo[DIM],int validos);
int capicua(int arreglo[DIM],int validos, int flag);

int main()
{
    int flag=0;
    int validos=0,arreglo[DIM];

    system("COLOR B");
    validos= cargar_arreglo(arreglo,validos);


    if(capicua(arreglo,validos,flag))
    {
        printf("   No es capicua \n");
    }
    else
    {
        printf(" Es capicua");
    }


    return 0;
}


int cargar_arreglo(int arreglo[DIM],int validos)
{
    int i=0,num;
    char o=0;
    while(o!=ESC)
    {
        printf("Ingrese dato \n");
        scanf("%d",&num);
        arreglo[i]=num;
        printf("Si desea salir presione ESCAPE o sino cualquier tecla para continuar \n");

        fflush(stdin);
        o=getch();
        i++;
    }

    return validos=i;
}

int capicua( int arreglo[DIM],int validos,int flag)
{
    int i=0;
    if(arreglo[i] != arreglo[i+2])
    {
        flag=1;
    }

    return flag;
}
