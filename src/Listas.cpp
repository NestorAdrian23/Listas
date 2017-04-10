#include "Listas.h"
#include "Nodo.h"

Listas::Listas(int Dato)
{
	Nodo* nuevo =new Nodo(Dato);
	this->H = nuevo;
	this->T = this->H;
}
Listas::Listas()
{
	this->H = NULL;
	this->T = NULL;
}

bool Listas::IsVacio()
{
	return (this->T==NULL && this->H==NULL);
}

void Listas::InsertarPrincipio(int Dato)
{
	Nodo* nuevo =new Nodo(Dato,H);
	if(IsVacio())
		this->T= this->nuevo;
	this->H = this->nuevo;
	//delete (nuevo);// para borrar el apuntador
}

void Listas::InsertarFinal(int Dato)
{
	Nodo* nuevo = new Nodo(int Dato);
	if(IsVacio())
	{
		this->T = this->nuevo;
		this->H = this->nuevo;
		return;
	}
	this->T->siguiente= this->nuevo;
	this->T = this->nuevo;
}

void Listas::InsertarReferencia(int Dato, int Referencia)
{
	if (IsVacio())
	{
		std::cout<<La lista esta vacia<<std::endl;
		return
	}
	Nodo* nuevo =Nodo* BuscarIterativo(Referencia);
	if(this->H==NULL)
	{
		std::cout<<La lista no existe<<std::endl;
		return;
	}
	if(this->m->siguiente ==NULL)
	{
		InsertarFinal(Dato);
		return;
	}
	Nodo* n= new Nodo(Dato, nuevo.siguiente)
	this->nuevo->siguiente = n;
}

void Listas::BorrarPrincipio();
{
	Nodo* aux=this->H;
	this->H = this->H.siguiente;
	if (this->H = NULL)
		this->T = NULL;
	this->aux->siguiente = NULL;
}

void Listas::BorrarFinal()
{
	Nodo* aux = this->H;
	if (this->H == this->T)
	{
		this->H = NULL;
		this->T = NULL;
		return;
	}
	while(this->aux->siguiente !=this->T)
		this->aux= this->aux->siguiente;
	this->T=this->aux;
	this->T-siguiente = NULL;
}

void Listas::BorrarReferencia(int Referencia)
{
	Nodo* referencia =Nodo *BuscarIterativo(Referencia)
	if (referencia==Null)
	{
		std::cout<<EL valor no puede ser borrado<<std::endl;
		return;
	}
	if (this->H == this->T )
	{
		this->H = NULL;
		this->T = NULL;
		return;	
	}
	Nodo* anterior = this->H;
	while(this->anterior->siguiente != this->referencia)
		this->anterior=this->anterior->siguiente;
	this->anterior->siguiente= this->refeferencia->siguiente;
	this->ref->siguiente=NULL;
	
}