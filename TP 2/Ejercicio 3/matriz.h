#ifndef MATRIZ_H_
#define MATRIZ_H_
#include<stdio.h>
#include<stdlib.h>
    typedef struct{
        int filas;
        int columnas;
        int* valores;
    }
    Matriz;
    Matriz* ingresarMatriz(int,int);
    Matriz* sumarMatrices(Matriz*, Matriz*);
    Matriz* restarMatrices(Matriz*, Matriz*);
    void mostrarMatriz(Matriz*);
#endif
