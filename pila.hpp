#include "lista_generica.hpp"
#include <string>

template <typename TIPODATO>
class Pila :private Lista<TIPODATO>{
	public:
		//constructor
		Pila();
		//agregar un item
		push(TIPODATO item);
		//remover un elemento
		TIPODATO pop();
		bool estaPilaVacia();
		string pilaComoCadena();
};

template<typename TIPODATO>
Pila<TIPODATO>::pila(){
	
	Lista<TIPODATO> Lista;
}

template<typename TIPODATO>
Pila<TIPODATO>::push(TIPODATO item){
	this->adjuntar(item);
}

template<typename TIPODATO>
TIPODATO Pila<TIPODATO>::pop(){
	return this->remover(this->tamano()-1);
}

template<typename TIPODATO>
bool Pila<TIPODATO>::estaPilavacia(){
	
	return this-estaVacia();
}

template<typename TIPODATO>
string Pila<TIPODATO>::estaComoCadena(){
	
	return this->comoCadena();
}





























