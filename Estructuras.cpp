#include <iostream>
#include <conio.h>

using namespace std;

struct duracion{
	int horas;
	int minutos;
};
struct tiempo{
	int hrs;
	int min;
};
struct vuelo{
	int numV;
	tiempo salida;
	tiempo llegada;
	duracion viaje;
}vuelos[15];

void leer(int n);
void imprimir(int n);
void duracionVuelo(int n);
int main (){
	int n;
	cout<<"ingrese la cantidad de vuelos:"<<endl;
	cin>>n;
	leer(n);
	imprimir(n);
	return 0;
}
void leer(int n){
	cout << "lectura de datos:" << endl;
	for(int i=0; i<n; i++){
		cout << "ingrese el numero de vuelo:" << endl;
		cin >> vuelos[i].numV;
		cout << "ingrese la hora de salida:" << endl;
		cout << "introduzca las horas:" << endl;
		cin >> vuelos[i].salida.hrs;
		cout << "introduzca los minutos:" << endl;
		cin >> vuelos[i].salida.min;
		cout << "ingrese la hora de llegada:" << endl;
		cout << "introduzca las horas:" << endl;
		cin >> vuelos[i].llegada.hrs;
		cout << "introduzca los minutos:" << endl;
		cin >> vuelos[i].llegada.min;
		cout << "\n";
	}
	
}
void imprimir(int n){
	
	duracionVuelo(n);
	
	for (int i=0; i<n; i++){
		cout << "No. de vuelo:" << vuelos[i].numV <<endl;
		cout << "Hora de salida: " << vuelos[i].salida.hrs << endl;
		cout << "Minutos de salida: " << vuelos[i].salida.min << endl;
		cout << "Hora de llegada: " << vuelos[i].llegada.hrs << endl;
		cout << "Minutos de llegada: " << vuelos[i].llegada.min << endl;
		cout << "Duracion horas de viaje: " << vuelos[i].viaje.horas << endl;
		cout << "Duracion minutos de viaje: " << vuelos[i].viaje.minutos << endl;
		cout << "\n";
	}
}
void duracionVuelo(int n){
	
	for (int i=0; i<n; i++){
		
		if (vuelos[i].llegada.hrs<vuelos[i].salida.hrs){
			vuelos[i].viaje.horas = ((vuelos[i].llegada.hrs - vuelos[i].salida.hrs)+24);
			vuelos[i].viaje.minutos = ((vuelos[i].llegada.min) - vuelos[i].salida.min);
		}else{
			if (vuelos[i].llegada.min<vuelos[i].salida.min){
				vuelos[i].viaje.horas = ((vuelos[i].llegada.hrs-1) - vuelos[i].salida.hrs);
				vuelos[i].viaje.minutos = ((vuelos[i].llegada.min+60) - vuelos[i].salida.min);
			}else{
				vuelos[i].viaje.horas = (vuelos[i].llegada.hrs - vuelos[i].salida.hrs);
				vuelos[i].viaje.minutos = (vuelos[i].llegada.min - vuelos[i].salida.min);
			}
		}
	}
}
