#include <iostream>
#include <conio.h>

using namespace std;

struct duracion{
	int hrs;
	int mins;
	
}vecduraciones[15];

struct hora{
	int hr;
	int min;
};

struct vuelo{
	int num;
	hora salida;
	hora llegada;
}vuelos [15];

void leer (int n);
void imprimir(int n);

int main(){
	
	int n;
	
	cout<<"Ingresar numero de registros:";
	cin>>n;
	leer(n);
	imprimir(n);
	
}

void leer (int n){
	
	for (int i=0;i<n;i++){
		cout<<"Ingresar numero de vuelo:";
		cin>>vuelos[i].num;
		cout<<"Ingresar hora de salida"<<endl;
		cout<<"HR:";
		cin>>vuelos[i].salida.hr;
		cout<<"MIN:";
		cin>>vuelos[i].salida.min;
		cout<<"Ingresar hora de llegada"<<endl;
		cout<<"HR:";
		cin>>vuelos[i].llegada.hr;
		cout<<"MIN:";
		cin>>vuelos[i].llegada.min;
		
	}
}
void imprimir(int n){
	
	for (int i=0;i<n;i++){
		
		vecduraciones[i].hrs=vuelos[i].llegada.hr-vuelos[i].salida.hr;
		vecduraciones[i].mins=vuelos[i].llegada.min-vuelos[i].salida.min;
	}
	
	for (int i=0;i<n;i++){
		cout<<"Numero de vuelo:"<<vuelos[i].num<<endl;
		cout<<"Hora de salida:"<<vuelos[i].salida.hr<<":"<<vuelos[i].salida.min<<endl;
		cout<<"Hora de llegada:"<<vuelos[i].llegada.hr<<":"<<vuelos[i].llegada.min<<endl;
		cout<<"Duracion del vuelo: "<<vecduraciones[i].hrs<<" Horas  "<<vecduraciones[i].mins<<" Minutos"<<endl;
		
	}
}
