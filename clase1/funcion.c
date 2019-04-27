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
void inicializarListado(int cantidadRegistros ,ePersona listado [] )
{
        int i;
        for(i=0;i<cantidadRegistros;i++)
        {
            listado[i].estado=0;
        }

}


int buscarLugarLibre(int cantidadRegistros, ePersona listado [])
{
    int i ;
    for (i=0;i<cantidadRegistros;i++)
    {
        if(listado[i].estado==0){
            return i;
        }

        else{
            return -1;
        }
    }
}

int cargarPersona(int cantidadRegistros,ePersona[] listado)
{
    int indice;
    indice=buscarLugarLibre(cantidadRegistros,listado);
    if(indice !=-1){
        listado[indice]=costruirPersona(3);

    }
    return indice;
}

int borrarPersona(int cantidadRegistro, ePersona listado [],ePersona persona)
{
    int indice;
    indice=buscarPersona(cantidadRegistro,listado,persona);
    if(indice !=-1)
    {
        listado[indice].estado=1;
    }
    return indice;
}
 int buscarPersona (int cantidadRegistro,ePersona listado[], ePersona persona )
 {
     int i;
    for(i=0;i<cantidadRegistro,i++){
        if(listado[i].id==persona.id){
            return i;
        }
    }

 }

 ePersona construirPersona(){
ePersona retornarPersona;
printf("Ingrese el id de persona  : ");
scanf("%d",&retornarPersona.id);

printf("Ingrese nombre ");
fflush(stdin);
gets(retornarPersona.nombre);

printf("Ingrese apellido ");
fflush(stdin);
gets(retornarPersona.Apellido);

printf("ingrese edad ");
fflush(stdin);
scanf("%d",retornarPersona.edad);

printf("ingrese la localidad  1\n lanus 2\n avellaneda 3\n gerli")


return retornarPersona;
}



