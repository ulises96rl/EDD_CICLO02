#include <iostream>
using namespace std;
int main(){
	
	//int num;
	
	//std::cout <<"Ingrese un numero entre 1 y 3: ";
	//std::cin >> num;
	
	int genero = 1;
	
	switch (genero) {
		case 1:
			cout << "Masculino" << endl;
			break;
		case 2:
			cout << "Femenino" << endl;
			break;
		default:
			cout << "Otro" << endl;
			break;
	}
	
	return 0;
}
