#include "Nodo.h"


Nodo::Nodo(int Dato, Nodo* siguiente)
{
	this->Dato = Dato;
	this->siguiente = siguiente;
}
Nodo::Nodo(int Dato)
{
	this->Dato = Dato;
	this->siguiente = NULL;
}
Nodo Nodo::BuscarIterativo(int Referencia)
{
	this->aux=this->H;
	while(this->aux->Dato != Referencia)
	{
		if(this->aux->siguiente==NULL)
		{
			//cout<<"El elemento no se encuentra"<<endl;
			return NULL;
		}
		this->aux=this->aux->siguiente;
	}
	return *aux;
}