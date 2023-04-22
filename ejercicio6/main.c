#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define ESC 27
#define DIM 5


/**Realizar una función que indique si un elemento dado se encuentra en un arreglo de caracteres.
*/


///Prototipado
void cargar_arreglo(int arreglo[DIM], int *validos);
void elemento(int arreglo[DIM], int validos);


int main()
{
    system("COLOR B");
    int arreglo[DIM],validos=0;
    cargar_arreglo(arreglo,&validos);
    elemento(arreglo,validos);

    return 0;
}


void cargar_arreglo(int arreglo[DIM], int *validos)
{
    int num,i=0;
    char o=0;

    while(o!=27 && i<DIM)
    {
        printf("Ingrese numero en posicion %d\n\t",i);
        scanf("%d",&num);
        arreglo[i]=num;
        printf("Presione ESCAPE para salir o cualquier tecla para continuar \n");
        fflush(stdin);
        o=getch();
        i++;
    }
    *validos=i;

}

void elemento(int arreglo[DIM], int validos)
{
    int num, i;
    printf("Ingrese el elemento a buscar \n");
    scanf("%d",&num);
    for(i=0; i<validos; i++)
    {

        if(num == arreglo[i])
        {
            printf("El elemento %d se encuentra en el arreglo \n",num);
            break;
        }

        else
        {
            printf("El elemento %d no se encuentra en el arreglo \n",num);
            break;
        }
    }

}
