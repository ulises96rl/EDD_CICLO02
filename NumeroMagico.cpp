#include <iostream>
#include <cstdlib> //Numeros aleatorios
#include <ctime> //Hora

int main(){
	
	//Genera numeros aleatorios entre 1 y 10
	int magico;  //numero magico
	int intento; //intento del usuario
    srand(time(0));
    magico =rand()%10 +1;
    
    //Da al usuario la oportunidad de adivinar el numero
    std::cout <<"Adivina el numero: ";
    std::cin >> intento;
    
    if(magico == intento){
    	std::cout << "Correcto!";
	}else if (magico > intento){
		std::cout << "Lo siento, mi numero ("<<magico<<") es mayor. \n";
	}else{
		std::cout <<"Lo siento, mi numero ("<<magico<<") es menor. \n";
	}
	
	return 0;
}
