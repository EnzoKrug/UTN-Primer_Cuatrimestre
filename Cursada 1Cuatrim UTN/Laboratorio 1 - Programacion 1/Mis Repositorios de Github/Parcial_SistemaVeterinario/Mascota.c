
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utn.h"
#include "Mascota.h"

static const char TXT_TIPOS[3][6]={"Gato","Perro","Raro"};

int pet_inicializarArray(Cliente list[], int len)
{
	int retorno = -1;
	int i;
	if(len > 0)
	{
		retorno = 0;
		for(i=0;i<len;i++)
		{
			list[i].isEmpty = LIBRE;
		}
	}
	return retorno;
}

int pet_HardcodeoArray(Cliente list[])
{

    Cliente buffer[] =   {  {0,"vvvv","Fello","Avellaneda","4309564535",25,'m',OCUPADO},
                            {1,"ssss","Fello","Avellaneda","4375481221",22,'f',OCUPADO},
                            {2,"pppp","Fello","Avellaneda","4302136565",26,'f',OCUPADO},
                            {3,"jjjj","Fello","Avellaneda","4326585121",30,'m',OCUPADO},
                            {4,"aaaa","Fello","Avellaneda","4302521151",50,'f',OCUPADO}};
    int i;

    for(i=0;i<5;i++)
    {
        list[i] = buffer[i];
    }
    return 0;
    //Verificar que si no hacemos id++ cuando se cargue al cliente va a seguir al id siguiente
}

int pet_AltaForzada(Cliente list[], int len, int indice, int idCliente, char nombre[], char apellido[], char localidad[], char telefono[], int edad, char sexo)
{
	int retorno = -1;
	Cliente buffer;

	if(list != NULL && len > 0)
	{
		strncpy(buffer.nombre,nombre,QTY_NOMBRE);
		strncpy(buffer.apellido,apellido,QTY_APELLIDO);
        strncpy(buffer.localidad,localidad,QTY_LOCALIDAD);
		strncpy(buffer.telefono,telefono,QTY_TELEFONO);
		buffer.edad = edad;
		buffer.sexo = sexo;
		retorno = 0;
		buffer.idCliente = idCliente;
		buffer.isEmpty = OCUPADO;
		list[indice] = buffer;
		idCliente++;

	}
	return retorno;
}

int pet_imprimir(Cliente elemento)
{
	int retorno = -1;
	if(elemento.isEmpty == OCUPADO)
	{
		retorno = 0;
		printf("\nID: %d - %s - %s - %s - %s - %d - %c - %d",elemento.idCliente,
                                                             elemento.nombre,
                                                             elemento.apellido,
                                                             elemento.localidad,
                                                             elemento.telefono,
                                                             elemento.edad,
                                                             elemento.sexo,
                                                             elemento.isEmpty);
	}
	return retorno;
}

int pet_imprimirArray(Cliente list[], int len)
{
	int retorno = -1;
	int i;
	if(len > 0)
	{
		retorno = 0;
		for(i=0;i<len;i++)
		{
			cli_imprimir(list[i]);
		}
	}
	return retorno;
}
