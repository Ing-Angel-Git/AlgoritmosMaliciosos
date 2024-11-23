#include <stdio.h>
#include <string.h>

int main() {
    FILE *archivo;
    char buffer[100];

    // Intentar abrir el archivo en modo lectura
    archivo = fopen("archivo.txt", "r");
    if (archivo == NULL) {
        // Si el archivo no existe, se crea
        printf("Archivo no encontrado. Creando 'archivo.txt'\n");
        archivo = fopen("archivo.txt", "w");
        if (archivo == NULL) {
            perror("Error al crear el archivo");
            return 1;
        }
        fprintf(archivo, "Hola profesor, espero este teniendo un buen dia!\n");
        fclose(archivo);

        // Reabrir el archivo en modo lectura
        archivo = fopen("archivo.txt", "r");
        if (archivo == NULL) {
            perror("Error al abrir el archivo después de crearlo");
            return 1;
        }
    }

    // Leer y mostrar el contenido del archivo
    printf("Contenido de 'archivo.txt':\n");
    while (fgets(buffer, sizeof(buffer), archivo) != NULL) {
        printf("%s", buffer);
    }

    fclose(archivo);
    return 0;
}
