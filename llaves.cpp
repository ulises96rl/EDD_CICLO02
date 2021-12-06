#include <iostream>
#include <string>
#include "pila.hpp"

using std::string;
using std::cin;
using std::cout;
using std::endl;

bool stanLlavesBalaceadas(string expresion){
	
	Pila<char> unaPila;
    for(size_t i=0; i<expresion.length(); i++){
    	char caracter = expresion[i];
    	cout<<caracter<<endl;
    	if(caracter == '{'){
    		unaPila.push(caracter);
    		cout<<unaPila.pilaComoCadena() <<endl;
		}else if(caracter == '}'){
			if(unaPila.estaPilaVacia()){
				return false;
			}
			unaPila.pop();
			cout<<unaPila.pilaComoCadena()<<endl;
		}
	}
	return unaPila.estaPilavacia();
}

int main(){
	
	string cadena;
	cout <<"Ingrese una expresion: " <<endl;
	cin >> cadena;
	if(estaLlavesBalanceadas(cadena)){
		cout<<"Las llaves estan balanceadas";
	}else{
		cout <<"Las llaves no estan balanceadas";
	}
	
	return 0;
}



















