#include<iostream>
#include"funciones.h"
#include"producto.h"
#include<bits/stdc++.h>
using namespace std;

void mostrar_lista(producto arr[], int &n)
{
	cout<<"N.\tnombre   \tprecio \tcantidad \tfecha"<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<i+1<<"\t"<<arr[i].nombre<<" \t"<<arr[i].precio<<" \t"<<arr[i].cantidad<<" \t\t"<<arr[i].fecha<<endl;
	}
}

void agregar_medicamento(producto arr[], int &n)
{
	cout<<"ingrese el nombre del medicamento: "; cin>>arr[n].nombre;
	cout<<"ingrese el precio: "; cin>>arr[n].precio;
	cout<<"ingrese la cantidad: "; cin>>arr[n].cantidad;
	cout<<"ingrese la fecha: "; cin>>arr[n].fecha;
	n++;
}
void eliminar_medicamento(producto arr[], int &n, string &buscar)
{
	cout<<"ingrese el medicamento a eliminar: "; cin>>buscar;
	for(int i=0; i<n; i++)
	{
		if(buscar==arr[i].nombre)
		{
			for(int j=i+1; j<n; j++)
			{
				arr[j-1].nombre=arr[j].nombre;
				arr[j-1].precio=arr[j].precio;
				arr[j-1].cantidad=arr[j].cantidad;
				arr[j-1].fecha=arr[j].fecha;
			}
			n--;
		}
	}
	
}

void actualizar_datos(producto arr[], int &n, string &actualizar)
{
	cout<<"ingrese el nombre del medicamento a actualizar:"; cin>>actualizar;
	for(int i=0; i<n; i++)
	{
		if(actualizar==arr[i].nombre)
		{
			cout<<"ingrese nuevo precio: "; cin>>arr[i].precio;
		}
	}
	
}
