#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED

#define QTY_NOMBRE 51
#define QTY_RAZA 25

#define LIBRE 0
#define OCUPADO 1

typedef struct
{
    int   idCliente;
    int   idMascota;
    char  nombre[QTY_NOMBRE];
    int   tipo;
    char  raza[QTY_RAZA];
    int   edad;
    float peso;
    char  sexo;
    int   isEmpty;

}Mascota;

int pet_inicializarArray(Mascota list[], int len);

int pet_HardcodeoArray(Mascota list[]);

int pet_AltaForzada(Mascota list[], int len, int indice, int idCliente, char nombre[], char apellido[], char localidad[], char telefono[], int edad, char sexo);

int pet_imprimir(Mascota elemento);

int pet_imprimirArray(Mascota list[],int len);



#endif // MASCOTA_H_INCLUDED
