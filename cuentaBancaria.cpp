#include "cuentaBancaria.h"

using namespace std;

int main(){
	
	//Crear una cuenta bancaria
	cuentaBancaria miCuenta("A-480920", "Juan Perez", 2900.00);
	cout <<"Titular: " <<miCuenta.getNombreTitular() <<endl;
	cout <<"# Cuenta" << miCuenta.getNumeroCuenta() <<endl;
	cout <<"Saldo: $" <<miCuenta.getSaldo()<<endl;
	cout<<"------------------------------------------------"<<endl;
	
	//Crear otra cuenta
	cuentaBancaria cuentaAmigo("C-165426", "Arale Perez", 891230.0);
	cout << "Titular: " << cuentaAmigo.getNombreTitular() <<endl;
	cout << "# Cuenta: " << cuentaAmigo.getNumeroCuenta() <<endl;
	cout <<"Saldo: $" <<cuentaAmigo.getSaldo() <<endl;
	cout <<"-----------------------------------------------" <<endl;
	
		//Crear otra cuenta
	cuentaBancaria cuentaNoValida("A-354698", "Pedro Martinez", -568999.0);
	cout << "Titular: " << cuentaAmigo.getNombreTitular() <<endl;
	cout << "# Cuenta: " << cuentaAmigo.getNumeroCuenta() <<endl;
	cout <<"Saldo: $" <<cuentaAmigo.getSaldo() <<endl;
	cout <<"-----------------------------------------------" <<endl;
	
	//Hacer retiro de la cuenta miCuenta
cout << "Quiero retirar $84 de la cuenta" << miCuenta.getNumeroCuenta() <<endl;
cout << "Saldo inicial: $" << miCuenta.getSaldo() <<endl;
miCuenta.retirar(84);
cout <<"Saldo luego de la operacion: $" << miCuenta.getSaldo() <<endl;
cout <<"--------------------------------------------------------------" <<endl;

//Hacer un retiro de la cuenta miCuenta mayor al saldo disponible
cout << "Quiero retirar $3500 de la cuenta" << miCuenta.getNumeroCuenta() <<endl;
cout << "Saldo inicial: $" << miCuenta.getSaldo() <<endl;
miCuenta.retirar(3500);
cout <<"Saldo luego de la operacion: $" << miCuenta.getSaldo() <<endl;
cout <<"--------------------------------------------------------------" <<endl;

//Hacer un retiro de la cuenta miCuenta mayor al saldo disponible
cout << "Quiero retirar -$725 de la cuenta" << miCuenta.getNumeroCuenta() <<endl;
cout << "Saldo inicial: $" << miCuenta.getSaldo() <<endl;
miCuenta.retirar(-725);
cout <<"Saldo luego de la operacion: $" << miCuenta.getSaldo() <<endl;
cout <<"--------------------------------------------------------------" <<endl;

//Hacer un retiro de la cuenta miCuenta mayor al saldo disponible
cout << "Quiero retirar $125000 de la cuenta" << miCuenta.getNumeroCuenta() <<endl;
cout << "Saldo inicial: $" << miCuenta.getSaldo() <<endl;
miCuenta.retirar(125000);
cout <<"Saldo luego de la operacion: $" << miCuenta.getSaldo() <<endl;
cout <<"--------------------------------------------------------------" <<endl;

//Hacer un retiro de la cuenta miCuenta mayor al saldo disponible
cout << "Quiero retirar -$5000 de la cuenta" << miCuenta.getNumeroCuenta() <<endl;
cout << "Saldo inicial: $" << miCuenta.getSaldo() <<endl;
miCuenta.retirar(-5000);
cout <<"Saldo luego de la operacion: $" << miCuenta.getSaldo() <<endl;
cout <<"--------------------------------------------------------------"<<endl;

return 0;
}



