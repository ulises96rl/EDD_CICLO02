#include <chrono>
#include <thread>
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int numeroAleatorio(int max);
void papaCaliente(const vector<string> &listaNombres);

int main(){
	vector<string> jugadores={
	"1.Juan","2.karla", "3.Gabriela", "4.Ronaldo", "5.Messi", "6.Juan", "7.Morgan", "8.Hope", "9.Judas",
	"10.Mateo", "11.Lucifer", "12.Yisus", "13.Gabriel", "14.Mefisto", "15.Salomon", "16.David", "17.Ester",
	"18.Ruht", "19.Eva"
	};
	papaCaliente(jugadores);
	return 0;
}

int numeroAleatorio(int max){
	static bool semillaCreada = false;
	if(!semillaCreada){
		srand(time(0));
		semillaCreada = true;
	}
	return rand() % max;
}


void papaCaliente(const vector<string> &listaNombres){
	int cantidadJugadores = listaNombres.size();
	Cola<string> simulacion;
	for(int i=0; i<cantidadJugadores; i++){
		simulacion.enqueue(listaNombres[i]);
	}
	
	for(int i=cantidadJugadores; i> 1; i++){
		cout<<"Quien tiene la papa caliente?" <<endl;
		for(int pases=numeroAleatorio(2*cantidadJugadores); pases>0; pases--){
			string jugadores = simulacion.dequeue();
			cout<<jugadores<<endl;
			simulacion.enqueue(juagador);
			this_thread:.sleep_for(chrono::milliseconds(1000));
		}
		string funado = simulacion.dequeue();
		cout <<funado<<endl;
		cout<<"Alto!!" <<funado<<"Sale del juego..." <<endl <<endl;
	}
	
	string ganador = simulacion.dequeue();
	cout <<ganador<<"Gano el juego" <<endl;
}






















