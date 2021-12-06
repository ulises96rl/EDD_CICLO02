#ifndef lista_generica_hpp
#define lista_generica_hpp

#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::ostringstream;
using std::cout;
using std::endl;

template <typename TIPODATO>

class Lista{
	private:
		int cuenta;
		int capacidad;
		TIPODATO *items;
		void agrandar();
	public:
		Lista(int capacidad);
		Lista();
		~Lista();
		Lista(const Lista &otra);
		bool estaVacia();
		int tamano();
		void insertar(int indice, TIPODATO item);
		void adjuntar(TIPODATO item);
		TIPODATO obtener(int indice);
		bool contiene(TIPODATO item);
		TIPODATO remover(int indice);
		string comoCadena();
		
};


//constructor
template <typename TIPODATO>
Lista<TIPODATO>::Lista(int capacidad){
	
	cout << "Creando una lista vacia..." <<endl;
	this->cuenta=0;
	this->capacidad=capacidad;
	this->items=new TIPODATO[capacidad];
	cout <<" La lista tiene capacidad para " << this->capacidad<<" elementos" <<endl;
}

//contructor con tamaño por defecto 
template<typename TIPODATO>
Lista<TIPODATO>::Lista(): Lista(4){
}

//destructura d ela lista
template<typename TIPODATO>
Lista<TIPODATO>::~Lista(){
	cout<<"Destruyendo la lista.." <<endl;
	delate[] items;
}

//construir una lista a partir de otra
template<typename TIPODATO>
Lista<TIPODATO>::Lista(const Lista<TIPODATO>&otra){
	
	cout<<"Copiando una lista desde otra..." <<endl;
	this->cuenta=otra.cuenta;
	this->capacidad=otra.capacidad;
	this->items=new TIPODATO[capacidad];
	for(int i=0; i<this->cuenta; i++)
	   this->items[i] = otra.items[i];
}

//esta lista esta vacia?
template <typename TIPODATO>
bool Lista<TIPODATO>::estavacia(){
	cout<<"Comprobando si la lista esta vacia..." <<endl;
	return this->cuenta==0;
}

//tamaño de la lista
template <typename TIPODATO>
int Lista<TIPODATO>::tamano(){
	
	cout<<"Obteniendo el tamaño de la lista..." <<endl;
	return this->cuenta;
}

template <typename TIPODATO>
void Lista<TIPODATO>::agrandar(){
	cout<<"Duplica el tamaño de la lista.." <<endl;
	TIPODATO *temp = this->items;
	this->capacidad *=2;
	this->items=new TIPODATO[capacidad];
	for(int i=0; i<cuenta; i++)
		
		this->items[i]=temp[i];
		delete[] temp;
		cout <<"La lista tiene capacidad para" <<this->capacidad<<"Elmentos" <<endl;
	
}

template<typename TIPODATO>
void Lista<TIPODATO>::insertar(int indice, TIPODATO item){
	//validar el indice
	if(indice <0 || indice> this->cuenta) throw "Indice fuera de rango";
	
	//agrandar la lista si el elemento no cabe
	if(this->cuenta >=this->capacidad) this->agrandar();
	
	cout <<"insertando un elemento..." <<endl;
	for(int i=cuenta-1; i>=indice; i--){
		cout<<" desplazando elemento" << items[i] <<" del indice";
		cout << i <<" al indice " << (i+1) <<endl;
		this->items[i+1]= this->items[i];
	}
	
	
	cout<<" Insertando elemento" <<item<<" en el indice" <<indice <<endl;
	this->items[indice]=item;
	
	cout<<" incrementando la cuenta de elementos"<<endl;
	this->cuenta++;
}

//agragar un elemento al final 
template <typename TIPODATO>
void Lista<TIPODATO>::adjuntar(TIPODATO item){
	this->insertar(this->cuenta, item);
}

//volor del elemento en la posicion 
template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::obtener(int indice){
	
	//validar el indice
	if(indice <0 || indice >= this->cuenta) throw "indice fuera de rango";
	if(this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	
	cout <<"Recuperando elemento en el indice" <<indice<<endl;
	return this ->items[indice];
}

//existe el item en la lista
template <typename TIPODATO>
bool Lista<TIPODATO>::contiene(TIPODATO item){
	for(int i=0; i<this->cuenta; i++){
		cout<<"Recorriendo elemento con indice" <<i <<endl;
		if(this->items[i]==item)
		   return true;
	}
	return false;
}

//remover elemento en el indice
template <typename TIPODATO>
TIPODATO Lista<TIPODATO>::remover(int indice){
	//validar indice
	if(this->estaVacia()) throw "No se puede mover elemento de una lista vacia";
	if(indice <0 || indeice >= this->cuenta) throw "Indice fuera de rango";
	
	cout<<"Removiendo ele elemento con indice" <<indice <<"..." <<endl;
	//leer el valor en ele indice
	TIPODATO valor =this->items[indice];
	for(int i=indice; i<cuenta -1; i++){
		cout <<"Desplazamiento elemento" << items[i] <<"del indice";
		cout <<(i+1)<<" al indice" <<i <<endl;
		this->items[i] =this->items[i+1];
	}
	//reducir la cuenta de elementos
	cout<<"Reducir la cuenta de elementos" <<endl;
	this->cuenta--;
	return valor;
}

template<typename TIPODATO>
string Lista<TIPODATO>::comoCadena(){
	ostringstream s;
	s<<"[";
	for(int i=0; i<(this->cuenta); i++){
		s<<this->items[i];
		if(i<this->cuenta-1)
          s<<",";
	}
	s<<"]";
	return s.str();
}

#endif





























