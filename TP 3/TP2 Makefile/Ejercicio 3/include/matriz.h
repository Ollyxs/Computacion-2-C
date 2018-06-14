/**
*@file matriz.h
*@author Julian Campana
*@brief Archivo de Prototipo de Suma y Resta de Matrices con Punteros
*/

#ifndef MATRIZ_H_
#define MATRIZ_H_
#include<stdlib.h>
#include<stdio.h>
    typedef struct
    {
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
