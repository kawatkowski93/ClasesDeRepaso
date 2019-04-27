  typedef struct{
    int id;
    char nombre[25];
    char Apellido[25];
    int edad;
    int idLocalidad;
    int estado;
    }ePersona;

    typedef struct{
    int id;
    char descripcion[25];
    }eLocalidad;

int cargarLocalidades(int cantidadRegistros,eLocalidad listado[]);
void mostrarListadoLocalidades(int cantidadRegistros, eLocalidad listado[]);
void mostrarLocalidad(eLocalidad localidad);
void  inicializarListado(int cantidadRegistros, ePersona listado[]);
int buscarLugarLibre(int cantidadRegistros, ePersona listado []);
int cargarPersona(int cantidadRegistros,ePersona[] listado);
int borrarPersona(int cantidadRegistro, ePersona listado [],ePersona persona);
int buscarPersona (int cantidadRegistro,ePersona listado[], ePersona persona );
