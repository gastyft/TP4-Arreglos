#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define DIM 4
/**
Hacer una funci�n que reciba como par�metro un arreglo de n�meros enteros
y permita que el usuario ingrese valores al mismo por teclado.
La funci�n debe retornar la cantidad de elementos cargados en el arreglo (o pueden utilizar como puntero v�lidos).
*/

 void carga_arreglo(int arr[DIM]);


int main()
{
    int arreglo[DIM];


    system("COLOR B");


   carga_arreglo(&arreglo[0]); /// o puede pasarse como carga_arreglo(arreglo)

    printf("%d",arreglo[1]);

    return 0;
}

void carga_arreglo(int arr[DIM])
{

    int i=0,nro;

      while (i<DIM)
    {

            printf("\nIngrese un valor para el espacio %d del arreglo: \n", i);
            scanf("%d", &nro);

                arr[i] = nro;

        i++;
    }
}

