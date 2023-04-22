#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <conio.h>
#define DIM 4



/**
Hacer una función que reciba como parámetro un arreglo y la cantidad de elementos (válidos) cargados en él y los muestre por pantalla.

*/
void cargar_arreglo(int arreglo[DIM]);
int validos(int arr[DIM]);
int main()
{
    system("COLOR B");
    int arr[DIM];
    cargar_arreglo(arr);
    printf("%i \n",arr[1]);
    printf("Los elementos validos son %d \n",validos(arr));
    return 0;
}

void cargar_arreglo(int arreglo[DIM])
{
int i=0,num;
    while(i<DIM)
    {
        printf("Ingrese dato en posicion %d \n\t",i);
        scanf("%d",&num);
        arreglo[i]=num;
        i++;
    }
}

int validos(int arr[DIM]){
int valid=DIM;

return valid;

}
