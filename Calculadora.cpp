#include <iostream>

using namespace std;

int main(){
	
	float x; //El primer numero
	float y;//El segundo numero
	float r;//El tercer numero
	char op;//El operador matematico a usar
	
	cout << "Calculadora sencilla" <<endl;
	cout <<"Numero 1:";
	cin >>x;
	cout<<"Numero 2:";
	cin >>y;
	cout <<"Operador (+ | - | * | / |)";
	cin >>op;
	
	switch(op){
		
		case '+':
			r= x + y;
			break;
		case '-':
			r=x-y;
			break;
		case '*':
			r=x*y;
			break;
		case '/':
			r=x/y;
			break;
		default:
			cout <<"Operador no valido" <<endl;
	}
	cout <<"x" <<op <<"y=" <<r<<endl;
	
	return 0;
}
