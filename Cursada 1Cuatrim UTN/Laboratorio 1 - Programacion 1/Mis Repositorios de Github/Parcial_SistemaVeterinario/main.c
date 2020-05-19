


/*1-Tenemos un listado de clientes(nombre, apellido,
 localidad,teléfono,edad,sexo) .
 tenemos por ahora 5 clientes(dueños de mascotas)
 pero tengo lugar para 10*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utn.h"
#include "Cliente.h"
#include "Mascota.h"

#define QTY_CLIENTES 10
#define QTY_MASCOTAS 20

int main()
{
    Cliente arrayClientes[QTY_CLIENTES];

    if(!cli_inicializarArray(arrayClientes,QTY_CLIENTES) && (!cli_HardcodeoArray(arrayClientes)))
    {
        printf("\nINIR Y HARDCODE OK");
    }

    cli_imprimirArray(arrayClientes,QTY_CLIENTES);

    printf("\nHello world!\n");
    return 0;
}








