#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>
#define ESC 27
#define DIM 20


/**Realizar una función que obtenga el máximo carácter de un arreglo dado.
*/

 void cargar_arreglo(char arreglo[DIM],int *validos);
 char maximo(char arreglo[DIM], int validos);


int main()
{
    int validos=0;

    char arreglo[DIM];
    system("COLOR B");
   cargar_arreglo(arreglo,&validos);
  printf("El maximo es: %c",maximo(arreglo,validos));

    return 0;
}

void cargar_arreglo(char arreglo[DIM],int *validos){

char o=0, dato;
int i=0;
while(o!= ESC){
    printf("Ingrese dato \n");
    scanf("%c",&dato);
    arreglo[i]=dato;
    printf("Si desea salir presione ESCAPE o cualquier tecla para continuar\n");
    fflush(stdin);
    o=getch();
i++;

}
system("cls");
*validos=i;
}

char maximo(char arreglo[DIM], int validos){

int i=0;
char aux;
aux=arreglo[i];
while(i<validos){
if(aux<arreglo[i]){
    aux= arreglo[i];
}
i++;
}


return aux;
}
