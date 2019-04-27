  typedef struct{
    int id;
    char nombre[25];
    char Apellido[25];
    int edad;
    int idLocalidad;
    }ePersona;

    typedef struct{
    int id;
    char descripcion[25];
    }eLocalidad;

int cargarLocalidades(int cantidadRegistros,eLocalidad listado[]);
void mostrarListadoLocalidades(int cantidadRegistros, eLocalidad listado[]);
void mostrarLocalidad(eLocalidad localidad);

