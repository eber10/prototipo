#include<iostream>
#include<string>
#include"funciones.h"
#include"producto.h"
using namespace std;



int main()
{
	const int tam=200;
	int n=10;
	string buscar, actualizar;
	producto medicamentos[tam]={
		{"paracetamol", 3.00, 2, "3/04/24"},
		{"ibuprofeno", 3.00, 2, "3/04/24"},
		{"amoxicilina", 3.00, 2, "3/04/24"},
		{"metformina", 3.00, 2, "3/04/24"},
		{"omeprazol", 3.00, 2, "3/04/24"},
		{"loratadina", 3.00, 2, "3/04/24"},
		{"losartan", 3.00, 2, "3/04/24"},
		{"metronidazol", 3.00, 2, "3/04/24"},
		{"diclofenaco", 3.00, 2, "3/04/24"},
		{"salbutamol", 3.00, 2, "3/04/24"}
		
	};
	cout<<"bienvenido"<<endl;
	int op;
	do
	{
		cout<<"1. mostrar lista de medicamentos"<<endl;
		cout<<"2. agregar medicamentos"<<endl;
		cout<<"3. eliminar medicamentos"<<endl;
		cout<<"4. actualizar datos"<<endl;
		cout<<"0. salir"<<endl;
		cin>>op;
		switch(op)
		{
			case 1:
				mostrar_lista(medicamentos, n);
				break;
			case 2:
				agregar_medicamento(medicamentos, n);
				break;
			case 3:
				eliminar_medicamento(medicamentos, n, buscar);
				break;
			case 4:
				actualizar_datos(medicamentos, n, actualizar);
				break;
		}
	}
	while(op!=0);
	
	return 0;
}
