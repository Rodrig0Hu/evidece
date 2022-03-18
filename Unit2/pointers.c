#include <stdio.h>
#include <stdlib.h>

int edad = 25;

int main(int argc, char** argv){
    printf("La varibale edad = %d\n",edad);
    printf("la direccion de la variable de edad = %p\n", &edad);
    //creacion de pointer//

    int* myPtr = NULL;
    myPtr = &edad;
    printf("la varibale pointr 'myPtr' es igual a,: %p\n", myPtr);
    printf("la direccion de la varibale 'myPtr' = %p\n", &myPtr);

    //cambair pointers//
    
     printf("La varibale edad = %d\n",edad);
    
        *myPtr = *myPtr * 2;
    printf (" el valor modificado de 'myPtr' es: %d\n", *myPtr);

    int* secondPtr = NULL;
    secondPtr = myPtr;


    return 0;

}
