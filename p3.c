#include <stdio.h>

void escribir_archivo(char *nombre);  

int main(int argc, char **args){
    char *nombre = "cedula.txt";
    escribir_archivo(nombre); 

    return 0;
}

void escribir_archivo(char *nombre){
    FILE *archivo;
    archivo = fopen(nombre, "w");
    if (archivo){
        char datos[1000];
        printf("Ingresa tu nombre: \n");
        fgets(datos, 999, stdin);
        fprintf(archivo, datos);
        printf("Ingresa tu apellido: \n");
        fgets(datos, 999, stdin);
        fprintf(archivo, datos);
        printf("Ingresa tu cedula: \n");
        fgets(datos, 999, stdin);
        fprintf(archivo, datos);
        printf("Ingresa tu numero: \n");
        fgets(datos, 999, stdin);
        fprintf(archivo, datos);
        fclose(archivo);
    }else{
        fprintf(stderr, "No se puede abrir el archivo\n", nombre);
    }
} 
