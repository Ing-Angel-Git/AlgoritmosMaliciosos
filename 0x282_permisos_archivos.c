#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>

int main() {
    struct stat fileStat;
    FILE *archivo;

    // Verificar si el archivo existe
    if (stat("archivo.txt", &fileStat) < 0) {
        printf("El archivo 'archivo.txt' no existe.\n");
        printf("¿Deseas crearlo?\n");
        printf("1. Sí\n");
        printf("2. No\n");
        printf("Ingresa tu elección: ");
        int opcion;
        scanf("%d", &opcion);

        if (opcion == 1) {
            // Crear el archivo
            archivo = fopen("archivo.txt", "w");
            if (archivo == NULL) {
                perror("Error al crear el archivo");
                return 1;
            }
            fprintf(archivo, "Este es un archivo de prueba.\n");
            fclose(archivo);
            printf("El archivo 'archivo.txt' ha sido creado.\n");
        } else {
            printf("No se creó el archivo. El programa ha terminado.\n");
            return 0;
        }
    }

    // Si el archivo existe, mostrar su información
    if (stat("archivo.txt", &fileStat) == 0) {
        printf("\nInformación del archivo 'archivo.txt':\n");
        printf("Permisos: %o\n", fileStat.st_mode & 0777);
        printf("Propietario UID: %d\n", fileStat.st_uid);
        printf("Grupo GID: %d\n", fileStat.st_gid);
    } else {
        perror("Error al obtener información del archivo");
        return 1;
    }

    return 0;
}
