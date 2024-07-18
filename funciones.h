#ifndef FUNCIONES_H
#define FUNCIONES_H
#include<iostream>
#include"producto.h"
void mostrar_lista(producto arr[], int &n);
void agregar_medicamento(producto arr[], int &n);
void eliminar_medicamento(producto arr[], int &n, std::string &buscar);
void actualizar_datos(producto arr[], int &n, std::string &actualizar);

#endif

