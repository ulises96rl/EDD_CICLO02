#include <iostream>
#include <string>

using namespace std;

class cuentaBancaria {
	
	private:
		string numeroCuenta;
		string nombreTitular;
		double saldo;
		
	public:
		cuentaBancaria(string num, string titular, double saldo);
		double getSaldo();
		string getNumeroCuenta();
		string getNombreTitular();
		void depositar(double importeDeposito);
		void retirar(double importeRetiro);
		
};

//implementa el constructor
cuentaBancaria::cuentaBancaria(string num, string titular, double saldo){
	
	//asignar saldo
	if(saldo <0){
		
		this -> saldo =0.00;
	}else{
		
		this ->saldo=saldo;
	}
	this->numeroCuenta = num;
	this ->nombreTitular = titular;
}

double cuentaBancaria::getSaldo(){
	
	return this->saldo;
}

string  cuentaBancaria::getNumeroCuenta(){
	return this ->numeroCuenta;
}

string cuentaBancaria::getNombreTitular(){
	
	return this->nombreTitular;
}



void cuentaBancaria::depositar(double importeDeposito){
	
	if(importeDeposito >0){
		
		this -> saldo += importeDeposito;
	}else{
		
		cout<<"! -Importe no valido " <<endl;
	}
}



void cuentaBancaria::retirar(double importeRetiro){
	
	if(importeRetiro > 0 && importeRetiro <= this ->saldo){
		
		this -> saldo -= importeRetiro;
	}else{
		
		cout <<"! - Importe no valido" << endl;
	}
}
