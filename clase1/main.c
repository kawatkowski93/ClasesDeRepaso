#include <stdio.h>
#include <stdlib.h>
#include "funcion.h"

int main()
{
eLocalidad localidades[3];
cargarLocalidades(3,localidades);
mostrarListadoLocalidades(3,localidades);
return 0;
}
