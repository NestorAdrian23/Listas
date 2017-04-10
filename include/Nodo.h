#include <iostream>

class Nodo
{
public:
	//Atributos
	int Dato;
	Nodo* siguiente;
	Nodo* H;
	Nodo* T;
	Nodo* aux;


	//constructor
	Nodo(int Dato , Nodo* siguiente);
	Nodo(int Dato);
	//metodos
	Nodo BuscarIterativo(int Referencia);
	//Nodo BuscarRecursivo(int Referencia, Nodo *A);
};