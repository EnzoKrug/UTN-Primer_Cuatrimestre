#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#define QTY_NOMBRE 51
#define QTY_APELLIDO 51
#define QTY_TELEFONO 10
#define QTY_LOCALIDAD 70

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int  idCliente;
    char nombre[QTY_NOMBRE];
    char apellido[QTY_APELLIDO];
    char localidad[QTY_LOCALIDAD];
    char telefono[QTY_TELEFONO];
    int  edad;
    char sexo;
    int  isEmpty;

}Cliente;

int cli_inicializarArray(Cliente list[], int len);

int cli_HardcodeoArray(Cliente list[]);

int cli_AltaForzada(Cliente list[], int len, int indice, int idCliente, char nombre[], char apellido[], char localidad[], char telefono[], int edad, char sexo);

int cli_imprimir(Cliente elemento);

int cli_imprimirArray(Cliente list[],int len);




#endif // CLIENTE_H_INCLUDED
