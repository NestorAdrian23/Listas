
class Lista
{
	
public:
	//constructores
	Listas(int Dato);
	Listas();
	//metodos
	void InsertarPrincipio(int Dato);
	void InsertarFinal(int Dato);
	bool IsVacio();
	void InsertarReferencia(int Dato, int Referencia);
	void BorrarPrincipio();
	void BorrarFinal();
	void BorrarReferencia(int referencia);
};