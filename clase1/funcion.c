#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

eLocalidad construirLocalidad(){
eLocalidad retornarLocalidad;
printf("Ingrese el id: ");
scanf("%d",&retornarLocalidad.id);

printf("Ingrese una descripcion");
fflush(stdin);
gets(retornarLocalidad.descripcion);
return retornarLocalidad;
}

int cargarLocalidades(int cantidadRegistros,eLocalidad listado[]){
int i;
for(i=0; i< cantidadRegistros;i++){
    listado[i] = construirLocalidad();
}
return 1;
}



    void mostrarListadoLocalidades(int cantidadRegistros, eLocalidad listado[]){
    int i;
    for(i =0;i<cantidadRegistros;i++){
        mostrarLocalidad(listado[i]);
    }
    }
    void mostrarLocalidad(eLocalidad localidad)
    {
    printf("\nCodigo : \t%d", localidad.id);
    printf("\nNombre : \t%s", localidad.descripcion);
    printf("\n--------------------------");
    }
