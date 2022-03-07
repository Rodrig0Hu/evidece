#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    printf("ingrese un numero %s\n", argv[0]);
    int number = atoi(argv[0]);
    bool isDivided = number%2 == 0;
    if (isDivided) {
        printf("sí es un númeor par\n");
    }
    else {
        printf("No es un númeor par\n");
    }

    return 0;
    }

    


